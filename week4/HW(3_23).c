#include<stdio.h>
#include<math.h>
#define PI 3.1415926535897 
void main() {
	int a, b, c;
	double temp = 0;
	scanf("%d %d %d", &a, &b, &c);
	double f[9];
	int index[9];
	for (int i = 0; i < 9; i++) {
		f[i] = a * exp(0.1 * i) + b * cos(0.2 * i * PI) + c * log(i / 3.0 + 1);
		index[i] = i;
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			if (f[j] > f[j + 1]) {
				temp = f[j + 1];
				f[j + 1] = f[j];
				f[j] = temp;
				temp = index[j + 1];
				index[j + 1] = index[j];
				index[j] = temp;
			}
		}
	}
	printf("f(x): ");
	for (int i = 0; i < 9; i++) {
		printf("  %lf  ", f[i]);
	}
	printf("\nx: ");
	for (int i = 0; i < 9; i++) {
		printf("       %d     ", index[i]);
	}
}