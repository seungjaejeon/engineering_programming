#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int unita(double a);
void main(int argc, char* argv[]) {
	srand(time(NULL));
	int num[10] = { 0 };
	int lenght = 0;
	double prob[10] = {0};
	char* str = argv[1];
	if (argv[1][0] == '-') {
		for (int i = 1; i < strlen(argv[1]); i++) {
			str[i-1] = 10 - (argv[1][i] - 48) + 48;
		}
		for (int i = 0; i < strlen(str)-1; i++) {
			printf(" %c\n", str[i]);
		}
		for (int i = 0; i < strlen(str) - 1; i++) {
			int index = (int)str[i] - 48;
			num[index] ++;
		}
		lenght = strlen(str) - 1;
	}
	else {
		for (int i = 0; i < strlen(argv[1]); i++) {
			str[i] = argv[1][i];
		}
		for (int i = 0; i < strlen(str); i++) {
			printf(" %c\n", str[i]);
		}
		for (int i = 0; i < strlen(str); i++) {
			int index = (int)str[i] - 48;
			num[index] ++;
		}
		lenght = strlen(str);
	}
	for (int k = 0; k < 10; k++) {
		for (int i = 0; i < 100000; i++) {
			prob[k] += unita((double)num[k] / (double)lenght);
		}
	}
	for (int i = 0; i < 10; i++) printf("%.2lf ", prob[i]/100000);
}
int unita(double a) {
	double result = (double)rand() / (double)RAND_MAX;
	if (a >= result) {
		return 1;
	}
	else return 0;
}