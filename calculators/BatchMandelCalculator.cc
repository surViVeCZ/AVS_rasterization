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
    data = NULL;
}


int * BatchMandelCalculator::calculateMandelbrot () {
	// @TODO implement the calculator & return array of integers
	return NULL;
}