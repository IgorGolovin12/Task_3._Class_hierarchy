#include "Figure.h"
#include "Triangele.h"

Triangele::Triangele() : Figure(3, "Треугольник") {}
Triangele::Triangele(int side_a, int side_b, int side_c, int corner_A, int corner_B, int corner_C) : Figure(3, "Треугольник")
{
	side_a_ = side_a;
	side_b_ = side_b;
	side_c_ = side_c;
	corner_A_ = corner_A;
	corner_B_ = corner_B;
	corner_C_ = corner_C;
}