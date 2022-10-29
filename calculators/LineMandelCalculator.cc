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
}

LineMandelCalculator::~LineMandelCalculator() {
	free(data);
	data = NULL;
}


int * LineMandelCalculator::calculateMandelbrot () {
	// @TODO implement the calculator & return array of integers

	//pocitani iteraci musi bzt o uroven vys, nutne prubezne ukladani dat
	int *pdata = data;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			float x = x_start + j * dx; // current real value
			float y = y_start + i * dy; // current imaginary value
			int value;
			for (int i = 0; i < limit; ++i)
			{
				if (x*x + y*y > 4.0f)
					value = i;
					break;

				y = 2.0f * x * y + y;
				x = x*x - y*y + x;
			}
			value = limit;
			*(pdata++) = value;
		}
	}
	return data;
}
