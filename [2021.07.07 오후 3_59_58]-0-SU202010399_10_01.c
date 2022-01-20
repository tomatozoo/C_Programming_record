#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void str_prn(int, char**);
int main()
{
	char tmp[80];
	char** str;
	int i;

	str = (char**)malloc(5 * sizeof(char*));
	i = 0;
	while (1)
	{
		printf("Enter %dth sentence : ", i+1);
		gets_s(tmp, sizeof(tmp), stdin);
		str[i] = (char*)malloc(strlen(tmp) + 1);
		strcpy(str[i], tmp);
		i++;
		if (i == 5)
			break;
	}
	str_prn(5, str);

	char search[80]; int count = 0;
	printf("Enter the word you want to find : ");
	scanf("%s", &search);
	
	for (int j = 0; j < 5; j++) {
		char* ptr = strstr(*(str + j), search);

		if (ptr != NULL) {
			count++;
			printf("%s\n", *(str + j));
		}

	}
	printf("\n\nNumber of sentences that contains %s word : %d", search, count);

	i = 0;
	while (i < 5) {
		free(str[i]);
		i++;
	}
	free(str);

	return 0;
}

void str_prn(int n, char** p_str)
{
	int i;
	for (i = 0; i < n; i++) {
		printf("%s\n", *(p_str + i));
	}
	return;
}