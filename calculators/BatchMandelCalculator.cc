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
    data = (int *)aligned_alloc(64, height * width * sizeof(int));
    zImag = (float *)aligned_alloc(64, width*sizeof(float));
    zReal = (float *)aligned_alloc(64, width*sizeof(float));
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
    int batch = 64;


    for (int x = 0; x < width * height/2; x++) {
        pdata[x] = 0;
    }
    #pragma omp simd
    for (int i = 0; i < height/2; i++) {
        float y = y_start + i * dy;  // current imaginary value
        // nulování
        int cnt = 0;
        int j = 0;
        for(int s = 0; s < width/batch; s++){

            #pragma omp simd aligned(zReal,zImag:64)
            for (int l = 0; l < batch; l++) {
                zReal[l] = 0;
                zImag[l] = 0;
            }
        
            for (int k = 0; k < limit; k++) {
                cnt = 0;
        
            
                for (int j = 0; j < batch; j++) {
                    float x = x_start + (j+s*batch) * dx;  // current real value
                    float r2 = zReal[j] * zReal[j];
                    float i2 = zImag[j] * zImag[j];
                 
                    if (r2 + i2 > 4.0f) {
                        cnt = cnt + 1;
                        continue;
                    }
                    zImag[j] = 2.0f * zReal[j] * zImag[j] + y;
                    zReal[j] = r2 - i2 + x;
                    // navýšení counteru
                    pdata[i* width + s*batch + j]++;
                    pdata[(height - i - 1)*width + s*batch + j]++;
                }
              
                if(cnt == batch){
                    break;
                }
            }
        }
    }
       
    return data;
}
