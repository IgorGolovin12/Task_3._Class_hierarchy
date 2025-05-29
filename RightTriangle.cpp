#include "Figure.h"
#include "Triangele.h"
#include "RightTriangle.h"

RightTriangle::RightTriangle(int side_a, int side_b, int side_c, int corner_A, int corner_B)
{
	name_ = "Прямоугольный треугольник";
	side_a_ = side_a;
	side_b_ = side_b;
	side_c_ = side_c;
	corner_A_ = corner_A;
	corner_B_ = corner_B;
	corner_C_ = 90;
}