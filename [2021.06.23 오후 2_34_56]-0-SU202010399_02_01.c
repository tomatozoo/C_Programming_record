#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a, b, c;
	printf("Enter three int numbers : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("The three numbers are %d, %d, %d\n", a, b, c);
	int e = a + b + c;
	printf("The sum is %d\n", e);
	printf("����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .");
	return 0;
} 