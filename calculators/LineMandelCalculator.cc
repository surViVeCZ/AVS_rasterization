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
    // rows = (int *)(malloc(width * sizeof(int)));
    // cols = (int *)(malloc(height * sizeof(int)));
    int *line_limits = (int *)malloc(width * sizeof(int));
    bool *overstepped = (bool *)malloc(width * sizeof(int));
}

LineMandelCalculator::~LineMandelCalculator() {
    free(data);
    data = NULL;
}

// načtení řádku do arraye
template <typename T>
static inline int *matrix_line(T y_real, size_t row_lenght) {
    static int cnt = 0;
    T real_array[row_lenght];

    // ukladani realnych cisel x
    real_array[cnt] = y_real;
    cnt++;
    return real_array;
}

int *LineMandelCalculator::calculateMandelbrot() {
    // @TODO implement the calculator & return array of integers
    // pocitani iteraci musi bzt o uroven vys, nutne prubezne ukladani dat
    // iteruji pres vsechny body v prostoru imaginarnich cisel
    int *pdata = data;

    for (int i = 0; i < height; i++) {
        float y = y_start + i * dy;  // current imaginary value
        for (int k = 0; k < limit; k++) {
            float i2 = y * y;
            float zImag = y;
            for (int j = 0; j < width; j++) {
                float x = x_start + j * dx;  // current real value
                float zReal = x;
                float r2 = x * x;

                if (r2 + i2 > 4.0f) {
                    // nějaká bool arary, kde si zaznačím překročení hranice pro konkrétní pixe, abych znovu nepřičítal
                    overstepped[j] = true;
                }
                zImag = 2.0f * zReal * zImag + y;
                zReal = r2 - i2 + x;

                // navýšení counteru
                pdata[j] = line_limits[j];
            }
        }
    }
    return data;
}
