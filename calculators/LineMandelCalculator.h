/**
 * @file LineMandelCalculator.h
 * @author Petr Pouč xpoucp01@stud.fit.vutbr.cz
 * @brief Implementation of Mandelbrot calculator that uses SIMD paralelization over lines
 * @date 29.10.2022
 */

#include <BaseMandelCalculator.h>

class LineMandelCalculator : public BaseMandelCalculator {
   public:
    LineMandelCalculator(unsigned matrixBaseSize, unsigned limit);
    ~LineMandelCalculator();
    int *calculateMandelbrot();
    template <typename T>
    static inline int *matrix_line(T y, size_t limit);

   private:
    int *data;
    int *overstepped;
    int *line_limits;
};