/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int is_triangle(int x, int y, int z);
double triangle_area(int p, int q, int r);

int main()
{
	int a, b, c, d;
	printf("Enter the length of the first side : \n");
	a = 0;
	scanf("%d", &a);
	printf("Enter the length of the second side : \n");
	b = 0;
	scanf("%d", &b);
	printf("Enter the length of the third side : \n");
	c = 0;
	scanf("%d", &c);
	d = 0;
	d = is_triangle(a, b, c);
	if (d == 1) {
		triangle_area(a, b, c);
	}
	else
	{
		printf("No satisfy triangle conditions.");
	}
	return 0;
}

int is_triangle(int a, int b, int c)
{
	//int a, b, c;
	if ((a <= 0) || (b <= 0) || (c <= 0) || ((a + b) <= c) || ((b + c) <= a) || ((a + c) <= b))
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}

double triangle_area(int p, int q, int r)
{
	double heron, s;
	s = p + q + r;
	s = s * (0.5);
	heron = 0;
	heron = ((s * (s - p) * (s - q) * (s - r)));
	heron = sqrt(heron);
	printf("The area of a triangle is %0.2lf", heron);
	
}*/