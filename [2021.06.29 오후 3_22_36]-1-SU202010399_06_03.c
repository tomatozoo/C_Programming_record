#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void P_Digit(int);

int main()
{
	int num;
	printf("Enter positive num : ");
	scanf("%d", &num);
	P_Digit(num);

	return 0;
}

void P_Digit(int a)
{
	if (a >= 10)
	{
		P_Digit(a / 10);
		printf("%d\n", a%10);

	}
	else {
		printf("%d\n", a);
	}
}