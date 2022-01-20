#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int a, b, c, mid;
	printf("Enter three int nums : ");
	scanf("%d %d %d", &a, &b, &c);

	if ((a <= b && a >= c) || (a <= c && a >= b)) {
		mid = a;
	}
	else if ((b <= a && b >= c) || (b <= c && b >= a)) {
		mid = b;
	}
	else {
		mid = c;
	}

	printf("The mid number is %d\n", mid);
	return 0;
}