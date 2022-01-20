/*#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int FindSecond(int arr[], int len_Arr);

int main() {
	int arr[10] = { 0 };
	srand(time(NULL));
	int i = 0, num = 0;

	for (i = 0; i < 10; i++) {
		num = 1 + rand() % 100;
		for (int j = 0; j < i; j++) {
			if (num == arr[j]) {
				num = 1 + rand() % 100;
			}
		}
		arr[i] = num;
		
	}
	
	printf("Data set : ");
	for (int j = 0; j < 10; j++) {
		if (j == 9) {
			printf(" %d", arr[j]);
		}
		else {
			printf(" %d,", arr[j]);
		}
	}
	printf("\nSecond num : %d\n", FindSecond(arr, 10));
	return 0;
}

int FindSecond(int arr[], int len_Arr)
{
	int small = arr[0], second = arr[0];
	for (int i = 0; i < len_Arr; i++) {
		if (arr[i] < small) {
			small = arr[i];
		}
	}

	for (int j = 0; j < len_Arr; j++) {
		if ((arr[j] > small) && (arr[j] < second)) {
			second = arr[j];
		}
	}
	return second;
}*/