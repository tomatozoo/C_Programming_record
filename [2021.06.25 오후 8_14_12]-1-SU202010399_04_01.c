#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int binary(int);
	
int main(void)
{
	int a;
	printf("Enter decimal int : ");
	scanf("%d", &a);
	binary(a);
	return 0;
}

int binary(int p)
{
	int q, digit, answer, startpoint; char r;
	if (p <= 0) {
		printf("%d is not positive int ( > 0).", p);
	}
	else {
		startpoint = p;
		answer = 0;
		digit = 0;

		while (p > 0) {
			q = 0;
			q = p % 2;
			answer += q * pow(10, digit);
			p /= 2;
			digit += 1;
		}

		printf("Binary code of %d : %d", startpoint, answer);
	}
	
}