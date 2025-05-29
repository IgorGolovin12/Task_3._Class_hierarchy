#include "Figure.h"
#include "Quadrilateral.h"
#include "Rhomb.h"

Rhomb::Rhomb(int side_a, int corner_A, int corner_B)
{
	name_ = "Ромб";
	side_a_ = side_c_ = side_b_ = side_d_ = side_a;
	corner_A_ = corner_C_ = corner_A;
	corner_B_ = corner_D_ = corner_B;
}