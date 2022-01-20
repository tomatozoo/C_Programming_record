#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	int num;
	printf("Enter positive int num : ");
	scanf("%d", &num);
	int divisor = 1;
	printf("******* Divisor list of %d *********\n", num);
	while (divisor <= num/2) {
		if (num % divisor == 0) {
			printf("%d, ", divisor);
		}
		divisor += 1;
	}
	printf("%d\n", num);

	return 0;
}