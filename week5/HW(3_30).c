#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[]) {
	int num[41] = { 0 };
	int j = 0;
	if (argc != 7) {
		printf(" main [#1][#2][#3][#4][#5][#6] \n");
		exit(1);
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]); int c = atoi(argv[3]); int d = atoi(argv[4]); int e= atoi(argv[5]); int f = atoi(argv[6]);
	
	for (int i = -20; i < 21; i++) {
		if (i >= a && i <= b && i <= c && i >= d && e <= i && i <= f) {
			if (-20 <= i && i <= 20) {
				num[j] = i;
				j++;
			}
		}
	}
	printf("Answer = ");
	for (int i = 0; i < j; i++) {
		printf("%d, ", num[i]);
	}
}