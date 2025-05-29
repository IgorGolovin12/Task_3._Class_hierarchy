#include "Figure.h"
#include "Quadrilateral.h"
#include "Square.h"

Square::Square(int side_a)
{
	name_ = " вадрат";
	side_a_ = side_c_ = side_b_ = side_d_ = side_a;
	corner_A_ = corner_B_ = corner_C_ = corner_D_ = 90;
}