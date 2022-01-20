#include <stdio.h>
int unionSet(int a[], int, int b[], int, int result[]);
void printSet(int a[], int number);

int main(void)
{
	int A[] = { 8, 20, 6, 2, 4, 22, 43 };
	int B[] = { 3, 9, 21, 20, 12, 22 };
	int result[13] = { 0 };

	printf("Set A = ");
	printSet(A, 7);
	printf("Set B = ");
	printSet(B, 6);
	printf("\n");

	int lenResult = unionSet(A, 7, B, 6, result);

	printf("AUB = ");

	printSet(result, 13 - lenResult);


	return 0;
}

int unionSet(int a[], int lenA, int b[], int lenB, int result[])
{
	int i, j, now;
	for (now = 0; now < lenA; now++) {
		result[now] = a[now];
	}
	for (j = 0; j < lenB; j++) {
		for (i = 0; i < lenA; i++) {
			if (b[j] == a[i]) {
				break;
			}
			if (i == lenA - 1) {
				result[now] = b[j];
				now++;
			}
		}
	}
	return lenA + lenB - now;
}

void printSet(int a[], int number)
{
	int j;
	printf("{");
	for (j = 0; j < number; j++) {
		if (j == number - 1) {
			printf("%d", a[j]);
		}
		else {
			printf("%d, ", a[j]);
		}
	}
	printf("}\n");
	return;
}