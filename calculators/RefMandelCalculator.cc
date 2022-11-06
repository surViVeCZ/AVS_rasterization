/**
 * @file RefMandelCalculator.cc
 * @author Vojtech Mrazek (mrazek@fit.vutbr.cz)
 * @brief Naive implementation
 * @date 2021-09-24
 */
#include "RefMandelCalculator.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

RefMandelCalculator::RefMandelCalculator(unsigned matrixBaseSize, unsigned limit) : BaseMandelCalculator(matrixBaseSize, limit, "RefMandelCalculator") {
    data = (int *)(malloc(height * width * sizeof(int)));
}

RefMandelCalculator::~RefMandelCalculator() {
    free(data);
    data = NULL;
}

template <typename T>
static inline int mandelbrot(T real, T imag, int limit) {
    T zReal = real;
    T zImag = imag;

    // nejvice zanorena smycka
    // iterativne pocita, zda nedoslo k preskroceni prahove hodnoty z(n) > 2
    for (int i = 0; i < limit; ++i) {
        T r2 = zReal * zReal;
        T i2 = zImag * zImag;

        if (r2 + i2 > 4.0f)
            return i;

        zImag = 2.0f * zReal * zImag + imag;
        zReal = r2 - i2 + real;
    }
    return limit;
}

int *RefMandelCalculator::calculateMandelbrot() {
    // iteruji pres vsechny body v prostoru imaginarnich cisel
    int *pdata = data;
    int value;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            float x = x_start + j * dx;  // current real value
            float y = y_start + i * dy;  // current imaginary value

            float zImag = y;
            float zReal = x;
            for (int i = 0; i < limit; ++i) {
                float r2 = x * x;
                float i2 = y * y;

                if (r2 + i2 > 4.0f)
                    value = i;

                zImag = 2.0f * zReal * zImag + y;
                zReal = r2 - i2 + x;
            }
            value = limit;

            *(pdata++) = value;
        }
    }
    return data;
}
