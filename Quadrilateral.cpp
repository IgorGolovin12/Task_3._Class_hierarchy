#include "Figure.h"
#include "Quadrilateral.h"

Quadrilateral::Quadrilateral() : Figure(4, "Четырехугольник") {}
Quadrilateral::Quadrilateral(int side_a, int side_b, int side_c, int side_d, int corner_A, int corner_B, int corner_C, int corner_D) : Figure(4, "Четырехугольник")
{
	side_a_ = side_a;
	side_b_ = side_b;
	side_c_ = side_c;
	side_d_ = side_d;
	corner_A_ = corner_A;
	corner_B_ = corner_B;
	corner_C_ = corner_C;
	corner_D_ = corner_D;
}