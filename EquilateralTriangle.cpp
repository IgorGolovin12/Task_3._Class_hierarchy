#include "Figure.h"
#include "Triangele.h"
#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int side_a)
{
	name_ = "Равносторонний треугольник";
	side_a_ = side_b_ = side_c_ = side_a;
	corner_A_ = corner_B_ = corner_C_ = 60;
}