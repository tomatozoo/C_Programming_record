#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	int integer, total, number, average;
	integer = 0;
	total = 0;
	number = 0;
	average = 0.00;
	while (1)
	{
		printf("Enter int num between 0 and 100 : ");
		scanf("%d", &integer);
		if (integer < 0) {
			break;
		}
		if (integer > 100) {
			continue;
		}
		total += integer;
		number += 1;
		average = total / number;

	}

	printf("**************************\n");
	printf("Number of data : %d\n", number);
	printf("Sum : %d and Average : %0.2f", total, average);

	return 0;
}