#include <stdio.h>
#define PI 3.14
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	float radius, circum, area;
	printf("Enter the value of the radius : ");
	scanf("%f", &radius);

	printf("\nRadius is : %5.2f\n", radius);
	circum = 2 * radius * PI;
	area = radius * radius * PI;
	printf("Circumference is : %5.2f\n", circum);
	printf("Area is : %5.2f\n", area);
	printf("����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . . ");

	return 0;
}


