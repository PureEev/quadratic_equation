#include "quadratic_equation.h"
#include <stdio.h>
#include <assert.h>

void test_roots_quadratic_equation_Zeros_Valid_roots_false() {
	struct roots_quadratic_equation result = solve_equation(0, 0, 0);
	assert(result.valid_roots == false);
}

void test_roots_quadratic_equation_a_equal_zero_Valid_roots_2() {
	struct roots_quadratic_equation result = solve_equation(0, 2, -4);

	assert(result.x1 == 2);
}

void test_roots_quadratic_equation_Negative_values_Valid_roots() {
	struct roots_quadratic_equation result = solve_equation(-1, -2, -1);
	assert(result.x1 == -1);
}

int main() {
	test_roots_quadratic_equation_Zeros_Valid_roots_false();
	test_roots_quadratic_equation_a_equal_zero_Valid_roots_2();
	test_roots_quadratic_equation_Negative_values_Valid_roots();
	return 0;
}