#include "Figure.h"
#include "Quadrilateral.h"
#include "Rectangle_A.h"

Rectangle_A::Rectangle_A(int side_a, int side_b)
{
	name_ = "Прямоугольник";
	side_a_ = side_c_ = side_a;
	side_b_ = side_d_ = side_b;
	corner_A_ = corner_B_ = corner_C_ = corner_D_ = 90;
}