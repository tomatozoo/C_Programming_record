#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
void binary(int);
int now = 7;
int toBinary[8] = { 0 };

int main() {
	srand(time(NULL));

	int digit = rand();
	while (1) {
		if (digit < 201 && digit > 0) {
			break;
		}
		else {
			digit = rand();
		}
	}

	printf("Binary code of %d\n", digit);

	binary(digit);

	for (int i = 0; i <8; i++) {
		printf("%d", toBinary[i]);
	}
	return 0;
}

void binary(int a) 
{
	static variable = 2;

	while (1) {
		if (a < variable) {
			toBinary[now] = a;
			now -= 1;
			break;
		}
		else {
			toBinary[now] = a % variable;
			now -= 1;
			a /= variable;
		}
	}
	return;
}