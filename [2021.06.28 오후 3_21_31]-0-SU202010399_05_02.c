#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, max, min;

	printf("Enter the number 1 : ");
	scanf("%d", &a);

	printf("Enter the number 2 : ");
	scanf("%d", &b);

	printf("Enter the number 3 : ");
	scanf("%d", &c);

	if ((a >= b) && (a >= c)) {
		max = a;
		if (b <= c) {
			min = b;
		}
		else {
			min = c;
		}
	}
	else if ((b > a) && (b >= c)) {
		max = b;
		if (a <= c) {
			min = a;
		}
		else {
			min = c;
		}
	}
	else {
		if (a <= b) {
			min = a;
		}
		else {
			min = b;
		}
		max = c;
	}

	printf("The max number is %d\n", max);
	printf("The min number is %d", min);
}
