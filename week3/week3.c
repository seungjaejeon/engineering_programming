/*#include<stdio.h>
double absol(double num) {
	if (num < 0) {
		return -num;
	}
	else {
		return num;
	}
}
void main() {
	FILE* fpt;
	fpt = fopen("input1.txt", "r");
	if (fpt == NULL) {
		printf("File read error");
		exit(1);
	}
	double num[10] = {0};
	for (int i = 0; i < 10; i++) {
		fscanf(fpt, "%lf", &num[i]);
	}
	fclose(fpt);
	double temp = 0;
	for (int i = 1; i < 10; i++) {
		for (int j = i-1; j >= 0; j--) {
			if (absol(num[j+1]) > absol(num[j])) {
				temp = num[j+1];
				num[j+1] = num[j];
				num[j] = temp;
			}
		}
		for (int i = 0; i < 10; i++) {
			printf("%.1lf	", num[i]);
		}
		printf("\n");
	}
	FILE* fpt_result;
	fpt_result = fopen("result.txt", "w");
	for (int i = 0; i < 10; i++) {
		fprintf(fpt_result, "%.1lf\n", num[i]);
	}
	fclose(fpt_result);
}*/