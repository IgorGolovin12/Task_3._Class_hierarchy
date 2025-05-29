#include <iostream>
#include <windows.h>
#include "Figure.h"
#include "Triangele.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle_A.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"

void print_info(Figure& F)
{
	if (F.get_sides_count() == 3)
	{
		std::cout << F.get_sides_name() << ":" << std::endl;
		std::cout << "Стороны: " << "a=" << F.get_side_a_() << " b=" << F.get_side_b_() << " c=" << F.get_side_c_() << std::endl;
		std::cout << "Углы: " << "A=" << F.get_corner_A_() << " B=" << F.get_corner_B_() << " C=" << F.get_corner_C_() << std::endl;
		std::cout << std::endl;
	}
	if (F.get_sides_count() == 4)
	{
		std::cout << F.get_sides_name() << ":" << std::endl;
		std::cout << "Стороны: " << "a=" << F.get_side_a_() << " b=" << F.get_side_b_() << " c=" << F.get_side_c_() << " d=" << F.get_side_d_() << std::endl;
		std::cout << "Углы: " << "A=" << F.get_corner_A_() << " B=" << F.get_corner_B_() << " C=" << F.get_corner_C_() << " D=" << F.get_corner_D_() << std::endl;
		std::cout << std::endl;
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Triangele T = { 10, 20, 30, 50, 60, 70 };
	print_info(T);
	RightTriangle RT = { 10, 20, 30, 50, 60 };
	print_info(RT);
	IsoscelesTriangle IT = { 10, 20, 50, 60 };
	print_info(IT);
	EquilateralTriangle ET = { 30 };
	print_info(ET);
	Quadrilateral(Q) = { 10, 20, 30, 40, 50, 60, 70, 80 };
	print_info(Q);
	Rectangle_A R = { 10, 20 };
	print_info(R);
	Square S = { 20 };
	print_info(S);
	Parallelogram P = { 20, 30, 30, 40 };
	print_info(P);
	Rhomb Rh = { 30, 30, 40 };
	print_info(Rh);
	return EXIT_SUCCESS;
}