#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	srand(time(NULL));
	int state;
	FILE* fp_r = fopen("a.txt", "w");

	for (int i = 0; i < 5; i++) {
		int rand1 = 0, rand2 = 0, rand3 = 0;
		
		while (1) {
			rand1 = rand() % 101;
			rand2 = rand() % 101;
			rand3 = rand() % 101;
			
			if (rand1 <= 100 && rand1 >= 0 && rand2 <= 100 && rand2 >= 0 && rand3 <= 100 && rand3 >= 0) {
				printf("%d %d %d\n", rand1, rand2, rand3);
				break;
			}
		}

		char randO[4] = { 0 };
		char randW[4] = { 0 };
		char randT[4] = { 0 };

		sprintf(randO, "%d", rand1);
		sprintf(randW, "%d", rand2);
		sprintf(randT, "%d", rand3);
		fputs(randO, fp_r);
		fputs(" ", fp_r);
		fputs(randW, fp_r);
		fputs(" ", fp_r);
		fputs(randT, fp_r);
		fputs("\n", fp_r);
	}

	fclose(fp_r);

	FILE* fp_w;
	fp_r = fopen("a.txt", "r");
	fp_w = fopen("b.txt", "w");
	

	if ((fp_r == NULL) || (fp_w == NULL)) {
		printf("error\n");
		return 1;
	}
	fputs("*************** Score List *****************\n", fp_w);
	fputs("********************************************\n", fp_w);
	int i = 1;
	int sum = 0; double mean = 0.0;
	while (1) {
		int data = 0;
		fscanf(fp_r, "%d", &data);

		if (feof(fp_r)) {
			break;
		}

		if ((i % 3) == 1) {
			sum = 0;
			mean = 0.0;
			sum += data;
			mean += (double)data;
			fprintf(fp_w, "%d : %d", i/3 +1, data);


		}
		else if ((i % 3 )== 2) {
			fprintf(fp_w, " %d", data);
			sum += data;
			mean += (double)data;
		}
		else {
			sum += data;
			mean += (double)data;
			fprintf(fp_w, " %d %d %.2lf\n", data, sum, mean/3);
		}

		i++;
	}

	fclose(fp_r);
	fclose(fp_w);
	return 0;
} 
