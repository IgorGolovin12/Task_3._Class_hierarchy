#include "Figure.h"
#include "Triangele.h"
#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int side_a, int side_b, int corner_A, int corner_B)
{
	name_ = "Равнобедренный треугольник";
	side_a_ = side_c_ = side_a;
	side_b_ = side_b;
	corner_A_ = corner_C_ = corner_A;
	corner_B_ = corner_B;
}