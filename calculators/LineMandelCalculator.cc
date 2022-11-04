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
    data = (int *)(malloc(height * width * sizeof(int)));
    overstepped = (bool *)malloc(width * sizeof(bool));
    zReal = (float *)malloc(width * sizeof(float));
    zImag = (float *)malloc(width * sizeof(float));
}

LineMandelCalculator::~LineMandelCalculator() {
    free(data);
    data = NULL;
}

int *LineMandelCalculator::calculateMandelbrot() {
    // iteruji pres vsechny body v prostoru imaginarnich cisel
    int *pdata = data;
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

            //TODO invalid entity
            #pragma omp simd
            for (int j = 0; j < width; j++) {
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
            if(cnt == width){
                break;
            }
        }
    }
    return data;
}
