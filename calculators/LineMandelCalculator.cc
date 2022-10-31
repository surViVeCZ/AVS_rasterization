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
	rows = (int *)(malloc(width * sizeof(int)));
	cols = (int *)(malloc(height * sizeof(int)));
}

LineMandelCalculator::~LineMandelCalculator() {
	free(data);
	data = NULL;
}

//načtení řádku do arraye
template <typename T> static inline int  *matrix_line(T  y_real, size_t row_lenght){
	static int cnt = 0;
	T real_array[row_lenght];

	//ukladani realnych cisel x
	real_array[cnt] = y_real;
	cnt++;
	return real_array
}

static inline int mandelbrot(T real, T imag, int limit)
{
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
	int N = width*height;
	int line[width];

	//iteruji přes řádky
	for (int j = 0; j < width; j++)
	{
		//line = 1 řádek matice
		if(line){
			float x = x_start + j * dx;
			
			int value = mandelbrot(x, line, limit);
			*(pdata++) = value;
		}
		//iterace po sloupcích
		for (int i = 0; i < height; i++)
		{
			float y = y_start + i * dy;
			line[i] = y;
		}
	}
	return data;
}
