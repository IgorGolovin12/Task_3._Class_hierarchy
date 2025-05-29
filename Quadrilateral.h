#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
class Quadrilateral : public Figure
{
	public:	
		Quadrilateral();
		Quadrilateral(int side_a, int side_b, int side_c, int side_d, int corner_A, int corner_B, int corner_C, int corner_D);	
};
#endif