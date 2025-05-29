#include "Figure.h"
#include "Quadrilateral.h"
#include "Parallelogram.h"

Parallelogram::Parallelogram(int side_a, int side_b, int corner_A, int corner_B)
{
	name_ = "ֿאנאככוכמדנאלל";
	side_a_ = side_c_ = side_a;
	side_b_ = side_d_ = side_b;
	corner_A_ = corner_C_ = corner_A;
	corner_B_ = corner_D_ = corner_B;
}