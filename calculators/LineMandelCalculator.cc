/**
 * @file LineMandelCalculator.cc
 * @author Petr Pouč xpoucp01@stud.fit.vutbr.cz
 * @brief Implementation of Mandelbrot calculator that uses SIMD paralelization over lines
 * @date 29.10.2022
 */
#include "LineMandelCalculator.h"

#include <stdlib.h>

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

LineMandelCalculator::LineMandelCalculator(unsigned matrixBaseSize, unsigned limit) : BaseMandelCalculator(matrixBaseSize, limit, "LineMandelCalculator") {
    data = (int *)aligned_alloc(64, height * width * sizeof(int));
    // overstepped = (bool *)malloc(width * sizeof(bool));
    // zReal = (float *)malloc(width * sizeof(float));
    // zImag = (float *)malloc(width * sizeof(float));
    zImag = (float *)aligned_alloc(64, width*sizeof(float));
    zReal = (float *)aligned_alloc(64, width*sizeof(float));
}

LineMandelCalculator::~LineMandelCalculator() {
    free(data);
    free(zReal);
	free(zImag);
    data = NULL;
}


int *LineMandelCalculator::calculateMandelbrot() {
    // iteruji pres vsechny body v prostoru imaginarnich cisel
    int *pdata = data;
    float zReal[width];
    float zImag[width];
    int cnt = 0;
    #pragma omp simd
    for (int x = 0; x < width * height; x++) {
        pdata[x] = 0;
    }
    
    for (int i = 0; i < height / 2; i++) {
        float y = y_start + i * dy;  // current imaginary value
	#pragma omp simd aligned(zImag,zReal:64)
        for (int l = 0; l < width; l++) {
            zReal[l] = 0;
            zImag[l] = 0;
            // overstepped[l] = false;
        }
        
        for (int k = 0; k < limit; k++) {
            
	    #pragma omp simd reduction(+:cnt)
            for (int j = 0; j < width; j++) {
                float x = x_start + j * dx;  // current real value
                float r2 = zReal[j] * zReal[j];
                float i2 = zImag[j] * zImag[j];
                //printf("%f %f\n", r2, i2);

                if (r2 + i2 > 4.0f) {
                    cnt = cnt + 1;
                    continue;
                }
                zImag[j] = 2.0f * zReal[j] * zImag[j] + y;
                zReal[j] = r2 - i2 + x;

                // navýšení counteru
                pdata[i * width + j]++;
                pdata[(height - i - 1) * width + j]++;
            }
            if(cnt == width){
		        break;
            }
        }
    }
    return data;
}
