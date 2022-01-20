#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
void prn_FILE(FILE* fp, char**, int num);

int main() {
	FILE* input, * output;
	int num = 0;
	input = fopen("input.txt", "r");
	output = fopen("SU202010399output.txt", "w");
	if ((input == NULL) || (output == NULL)) {
		printf("error \n");
		return 1;
	}
	
	while (1) {
		int try[50];
		char save[50];
		if (feof(input)) {
			break;
		}
		fscanf(input, "%d %s", &try, &save);
		num++;
	}
	/*
	int repeat = 0;
	char* str[5] = { 0 };
	if (str == NULL) {
		printf("error\n");
		return 1;
	}*/
	/*
	while (repeat < num) {
		int write = 0;
		char tmp[50];
		fscanf(input, "%d %s", &write, &tmp);
		char a = 'a';

		*(str + repeat) = (char*)malloc(sizeof(char) * strlen(tmp));
		*(str + repeat) = tmp;
		printf("%c\n", *(str + repeat));
		repeat++;
	}*/
	/*
	for (int k = 0; k < num; k++) {
		printf("%s\n", *(str + k));
		free(*(str + k));

	}*/
	prn_FILE(output, str, num);
	free(str);
	fclose(input);
	fclose(output);
	return 0;
}

void prn_FILE(FILE* fp, char** str, int num) {
	fprintf(fp, "**********%d strings ************\n", num);


	for (int i = 1; i <= num; i++) {
		fputs(*(str + num - i),fp);
		fprintf(fp, "\n");
	}
	
}