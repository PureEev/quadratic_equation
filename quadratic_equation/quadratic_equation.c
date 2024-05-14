#include <stdio.h>
#include <math.h>
#include"quadratic_equation.h"

struct roots_quadratic_equation solve_equation(int a, int b, int c) {
	struct roots_quadratic_equation result;
	result.x1 = 0;
	result.x2 = 0;

	if (a == 0) {
		if (b == 0) {
			result.valid_roots = false;
			return result;
		}
		result.x1 = -(float)c / (float)b;
		result.x2 = result.x1;
		return result;
	}

	if (c == 0) {
		result.x1 = 0;
		result.x2 = -(float)b / (float)a;
		return result;
	}

	double discriminant = pow((float)b, 2) - 4 * (float)a * (float)c;

	if (discriminant < 0 || (a==0 & b==0 & c==0)) {
		result.valid_roots = false;
		return result;
	}
	else result.valid_roots = true;

	result.x1 = (-(float)b - sqrt(discriminant)) / (2 * (float)a);
	result.x2 = (-(float)b + sqrt(discriminant)) / (2 * (float)a);
	return result;

}
