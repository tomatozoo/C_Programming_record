#include <stdio.h>
#define PI 3.14
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a;
	printf("Enter a four-digit integer : ");
	scanf("%d", &a);
	printf("Number of digits of 1 : %d\n", a % 10);
	a /= 10;
	printf("Number of digits of 10 : %d\n", a % 10);
	a /= 10;
	printf("Number of digits of 100 : %d\n", a % 10);
	a /= 10;
	printf("Number of digits of 1000 : %d\n", a % 10);

	return 0;
}
