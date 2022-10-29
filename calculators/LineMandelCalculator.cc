/**
 * @file LineMandelCalculator.cc
 * @author Petr Pouč xpoucp01@stud.fit.vutbr.cz
 * @brief Implementation of Mandelbrot calculator that uses SIMD paralelization over lines
 * @date 29.10.2022
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <stdlib.h>


#include "LineMandelCalculator.h"


LineMandelCalculator::LineMandelCalculator (unsigned matrixBaseSize, unsigned limit) : BaseMandelCalculator(matrixBaseSize, limit, "LineMandelCalculator")
{
	data = (int *)(malloc(height * width * sizeof(int)));
	line = (int *)(malloc(width * sizeof(int)));
	col = (int *)(malloc(height * sizeof(int)));
}

LineMandelCalculator::~LineMandelCalculator() {
	free(data);
	data = NULL;
}

template <typename T>
static inline int mandelbrot(T real, T imag, int limit)
{
	// static int cnt = 0
	// T real_array[size];

	// //ukladani realnych cisel x
	// real_array[cnt] = real;
	// cnt++;

	T zReal = real;
	T zImag = imag;

	//nejvice zanorena smycka
	//iterativne pocita, zda nedoslo k preskroceni prahove hodnoty z(n) > 2
	for (int i = 0; i < limit; ++i)
	{
		T r2 = zReal * zReal;
		T i2 = zImag * zImag;

		if (r2 + i2 > 4.0f)
			return i;

		zImag = 2.0f * zReal * zImag + imag;
		zReal = r2 - i2 + real;
	}
	return limit;
}

int * LineMandelCalculator::calculateMandelbrot () {
	// @TODO implement the calculator & return array of integers

	//pocitani iteraci musi bzt o uroven vys, nutne prubezne ukladani dat
	//iteruji pres vsechny body v prostoru imaginarnich cisel
	int *pdata = data;
	int N = height*width;
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			float x = x_start + j * dx; // current real value
			float y = y_start + i * dy; // current imaginary value
			int value = mandelbrot(x, y, limit);

			*(pdata++) = value;
		}
	}
	return data;
}
