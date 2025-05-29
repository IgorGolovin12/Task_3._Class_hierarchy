#ifndef TRIANGELE_H
#define TRIANGELE_H
class Triangele : public Figure
{
public:
	Triangele();
	Triangele(int side_a, int side_b, int side_c, int corner_A, int corner_B, int corner_C);
};
#endif