#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int primeCheck(int);

int main(void)
{
	int start = 0, end = 0, range = 0, i = 0, prime[100] = { 0 };
	printf("Enter a range of input data: ");
	scanf("%d %d", &start, &end);
	if (2 <= start && 2 <= end && start <= 100 && end <= 100) {
		while (1) {
			if (start > end) {
				break;
			}
			if (primeCheck(start) == 1) {
				prime[i] = start;
				i++;
			}
			start++;
		}
		printf("******** %d prime numbers ************\n", i);
		for (int j = 0; j < i; j++) {
			printf(" %d", prime[j]);
		}

	}
	else {
		printf("Out-of-Range Input Values");
	}


	return 0;
}

int primeCheck(int a)
{
	int divisor = 2;
	while (1) {
		if (a == 2) {
			return 1;
			break;
		}
		if (divisor == (a / 2 + 1) && a % divisor != 0) {
			return 1;
			break;
		}
		else if (a % divisor == 0) {
			return 0;
			break;
		}
		else {
			divisor++;
		}

	}
}