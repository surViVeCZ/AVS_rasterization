/**
 * @file BatchMandelCalculator.cc
 * @author Petr Pouč xpoucp01@stud.fit.vutbr.cz
 * @brief Implementation of Mandelbrot calculator that uses SIMD paralelization over lines
 * @date 04.11.2022
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <stdlib.h>
#include <stdexcept>

#include "BatchMandelCalculator.h"

BatchMandelCalculator::BatchMandelCalculator (unsigned matrixBaseSize, unsigned limit) :
	BaseMandelCalculator(matrixBaseSize, limit, "BatchMandelCalculator")
{
    data = (int *)aligned_alloc(1024, height * width * sizeof(int));
    zImag = (float *)aligned_alloc(1024, width*sizeof(float));
    zReal = (float *)aligned_alloc(1024, width*sizeof(float));
}

BatchMandelCalculator::~BatchMandelCalculator() {
	free(data);
	free(zReal);
	free(zImag);
    data = NULL;
}

int * BatchMandelCalculator::calculateMandelbrot () {
	// iteruji pres vsechny body v prostoru imaginarnich cisel
    int *pdata = data;
    float zReal[width];
    float zImag[width];
    int batch_start;
    int batch_end;

    for (int x = 0; x < width * height/2; x++) {
        pdata[x] = 0;
    }

    for (int i = 0; i < height; i++) {
        float y = y_start + i * dy;  // current imaginary value
        // nulování
        int offset = 1;
        int cnt = 0;
        int j = 0;
        #pragma omp simd
        for (int l = 0; l < width; l++) {
            zReal[l] = 0;
            zImag[l] = 0;
        }
       
        for (int k = 0; k < limit; k++) {
            cnt = 0;
            j = 0;
            //TODO invalid entity
            #pragma omp simd
            for (j = 64*(offset-1); j < 64*offset; j++) {
                float x = x_start + j * dx;  // current real value
                float r2 = zReal[j] * zReal[j];
                float i2 = zImag[j] * zImag[j];
                //printf("%d %d\n", j, offset);
                //printf("%d %d\n", j, (64*offset));
                if (r2 + i2 > 4.0f) {
                    cnt++;
                    continue;
                }
                zImag[j] = 2.0f * zReal[j] * zImag[j] + y;
                zReal[j] = r2 - i2 + x;
                // navýšení counteru
                pdata[i * width + j]++;
                pdata[(height - i - 1) * width + j]++;
            }
            //přesun na další batc
            if(cnt == 64){
                offset += 1; //všech 64 dosáhlo hranice, pokračuji na dalších 64
                k = 0;
            }
            //new line
            if(offset*64 > width){
                break;
            }
        }
    }
    //  for (int l = 0; l < width; l++) {
    //         printf("%d\n", pdata[l]);
    //     }
       
    return data;
}