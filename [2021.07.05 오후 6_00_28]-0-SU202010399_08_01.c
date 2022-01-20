#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
int qua_func(double, double, double, double*, double*);

int main() {
	double a, b, c;
	printf("Enter three real number for root formula : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	double * p = &a, * q=&b;
	int result = qua_func(a, b, c, p, q);
	if (result == 0) {
		printf("No root exists!\n");
	}
	else if (result == 1) {
		printf("Equal root x1 and x2 = %.2lf", *p);
	}

	else {
		printf("x1 = %.2lf\n", *p);
		printf("x2 = %.2lf\n", *q);
	}
	return 0;
}

int qua_func(double x, double y, double z,  double* r, double* s) {

	double power = pow(y, 2);
	double discri = (power - 4 * x * z);
	double bound = 1.0e-8;

	if (discri < (-bound)) {
		return 0;
	}
	else if (-bound <= discri && discri <= bound)

	{	 
		*r = (-y) / (2 * x);
		return 1;
	}
	else {
		*r = (-y + sqrt(discri)) / (2 * x);
		*s = (-y - sqrt(discri)) / (2 * x);
		return 2;
	}
}