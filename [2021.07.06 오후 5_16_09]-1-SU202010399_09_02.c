#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 20
#include <stdlib.h>

int main()
{
	int* p;
	p = (int*)malloc(sizeof(int) * 20);
	if (p == NULL) {
		printf("not allocated\n");
		return 1;
	}

	int num = 0, current = 2, isprime = 2;
	while (1) {
		if (num == 20) {
			break;
		}
		while (1) {
			if (current == 2) {
				*(p + num) = current;
				num++;
				current++;

			}
			if (current % isprime != 0 && isprime == current - 1) {
				* (p + num) = current;
				num += 1;
				current += 1;
				break;
			}
			if (current % isprime == 0) {
				current += 1;
				break;
			}
			isprime++;
		}
		isprime = 2;
	}

	printf("****************** 20 prime numbers ****************\n");
	for (int i = 0; i < 20; i++) {
		printf(" %2d", *(p + i));
	}
	printf("\n");
	

	printf("****************** twin prime ****************\n");
	for (int j = 0; j < 20; j++) {
		if (*(p + j) + 2 == *(p + j + 1)) {
			printf("( %d, %d)\n", *(p + j), *(p + j + 1));
		}
	}
	free(p);
	return 0;
}
