#include "Figure.h"
#include <iostream>
#include <string>

Figure::Figure()
{
	sides_count_ = 0;
	name_ = "Фигура";
}
Figure::Figure(int sides_count, std::string name)
{
	sides_count_ = sides_count;
	name_ = name;
}
Figure::~Figure() {}
int Figure::get_sides_count() { return sides_count_; }
std::string Figure::get_sides_name() { return name_; }
int Figure::get_side_a_() { return side_a_; }
int Figure::get_side_b_() { return side_b_; }
int Figure::get_side_c_() { return side_c_; }
int Figure::get_side_d_() { return side_d_; }
int Figure::get_corner_A_() { return corner_A_; }
int Figure::get_corner_B_() { return corner_B_; }
int Figure::get_corner_C_() { return corner_C_; }
int Figure::get_corner_D_() { return corner_D_; }