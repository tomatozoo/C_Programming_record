#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float a, c, answer; char b;

	printf("Enter a math expression(10 + 20) : ");
	scanf("%f %c %f", &a, &b, &c);
	answer = 0;

	int ascii_b = b;

	switch (ascii_b) 
	{
	case 43: //+ �ǹ���
		answer = 0;
		answer = a + c;
		printf("\n>>>>>>>>> �����\n");
		printf("%0.2f %c %0.2f = %0.2f", a, b, c, answer);
		break;

	case 45: //- �ǹ���
		answer = 0;
		answer = a - c;
		printf("\n>>>>>>>>> �����\n");
		printf("%0.2f %c %0.2f = %0.2f", a, b, c, answer);

		break;

	case 42: //* �ǹ���
		answer = 0;
		answer = a * c;
		printf("\n>>>>>>>>> �����\n");
		printf("%0.2f %c %0.2f = %0.2f", a, b, c, answer);

		break;

	case 47: // ������ �ǹ���
		if (c == 0) {
			printf("Operand Error");
			break;
		}
		answer = 0;
		answer = a / c;
		printf("\n>>>>>>>>> �����\n");
		printf("%0.2f %c %0.2f = %0.2f", a, b, c, answer);

		break;

	default:
		printf("%c is unacceptable operator", b);
	}

	

}
