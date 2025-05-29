#include <string>
#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
protected:
	int sides_count_;
	std::string name_;
	int side_a_;
	int side_b_;
	int side_c_;
	int side_d_;
	int corner_A_;
	int corner_B_;
	int corner_C_;
	int corner_D_;
public:
	Figure();
	Figure(int sides_count, std::string name);
	~Figure();
	int get_sides_count();
	std::string get_sides_name();
	int get_side_a_();
	int get_side_b_();
	int get_side_c_();
	int get_side_d_();
	int get_corner_A_();
	int get_corner_B_();
	int get_corner_C_();
	int get_corner_D_();
};
#endif