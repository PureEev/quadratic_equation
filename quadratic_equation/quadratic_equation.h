#pragma once
#include <stdbool.h>

struct roots_quadratic_equation{
	double x1;
	double x2;
	bool valid_roots;
};

struct roots_quadratic_equation solve_equation(int a, int b, int c);