#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void mulMatrix(int(*p)[3], int, int(*q)[4], int(*r)[4]);

int main()
{
	int A[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int B[3][4] = { {1,4,7,10}, {2,5,8,11}, {3,6,9,12} };
	int C[3][4] = { {0} };
	int (*ptrA)[3] = &A;
	int (*ptrB)[4] = &B;
	int (*ptrC)[4] = &C;

	int rowA = 0, colA = 0, rowB = 0, colB = 0;
	rowA = sizeof(A) / sizeof(A[0]);
	colA = sizeof(A[0])/ sizeof(int);
	rowB = sizeof(B) / sizeof(B[0]);
	colB = sizeof(B[0]) / sizeof(int);

	mulMatrix(ptrA, rowA, ptrB, ptrC);

	printf("****************** Matrix A ****************\n");
	for (int i = 0; i < rowA; i++) {
		for (int j = 0; j < colA; j++) {
			printf("%d ", (*(*(ptrA+i))+j)); 
		}
		printf("\n");
	}

	printf("****************** Matrix B ****************\n");
	for (int i = 0; i < rowB; i++) {
		for (int j = 0; j < colB; j++) {
			printf("%d ", *(*(ptrB + i) + j));
		}
		printf("\n");
	}
	
	printf("****************** Matrix A * B ****************\n");
	for (int i = 0; i < rowA; i++) {
		for (int j = 0; j < colB; j++) {
			printf("%d ", *(*(ptrC + i) + j));
		}
		printf("\n");
	}
	return 0;
}

void mulMatrix(int(*p)[3], int a, int(*q)[4], int(*r)[4]) {
	int rowP = a, colP = 0, rowQ = 3, colQ = 4;
	colP = sizeof(*p) / sizeof(rowP);
	colP = rowQ;
	colQ = sizeof(*q) / sizeof(rowQ);

	for (int i = 0; i < rowP; i++) { 
		for (int j = 0; j < colQ; j++) {
			*(*(r+i)+j) = 0;
			for (int k = 0; k < rowQ; k++) { 
				*(*(r + i) + j) += (*(*(p + i) + k)) * (*(*(q + k) + j));
			}
		}
	}
	return;
} 