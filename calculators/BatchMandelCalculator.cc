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
	data = (int *)(malloc(height * width * sizeof(int)));
    overstepped = (bool *)malloc(width * sizeof(bool));
    zReal = (float *)malloc(width * sizeof(float));
    zImag = (float *)malloc(width * sizeof(float));
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
	int offset = 0;
    float zReal[width];
    float zImag[width];
    int cnt = 0;
    for (int x = 0; x < width * height; x++) {
        pdata[x] = 0;
    }

    for (int i = 0; i < height / 2; i++) {
        float y = y_start + i * dy;  // current imaginary value
        // nulování
        #pragma omp simd
        for (int l = 0; l < width; l++) {
            zReal[l] = 0;
            zImag[l] = 0;
            // overstepped[l] = false;
        }
       
        for (int k = 0; k < limit; k++) {
            //iteruji po 64 prvcích
            #pragma omp simd
            for (int j = offset; j < 64+offset; j++) {
                float x = x_start + j * dx;  // current real value
                float r2 = zReal[j] * zReal[j];
                float i2 = zImag[j] * zImag[j];

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
			offset += 64;
            if(cnt == width || offset > width){
                break;
            }
        }
        offset = 0;
    }
    return data;
}