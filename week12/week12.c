#include<stdio.h>
#include<string.h>
void main(int argc, char *argv[]) {
	int i, i_temp, a, X, result = 0;
	int result_2[16] = { 0 };
	int result_10 = 0;
	X = atoi(argv[1]);
	a = atoi(argv[2]);

	X = (X >> a);
	for (i = 0; i < 16; i++) {
		i_temp = ((X >> 7) & 0x01) + ((X >> 6) & 0x01) + ((X >> 3) & 0x01) + ((X >> 2) & 0x01) + (X & 0x01);
		i_temp %= 2;
		result += i_temp << i;
		X = (X >> 1);
	}
	printf("%d(0x%x) :", result, result);
	for (i = 0; i < 16; i++) {
		result_2[i] = result % 2;
		result /= 2;
	}
	
	for (i = 15; i >= 0; i--) {
		printf("%d", result_2[i]);
		if (i % 4 == 0) printf("   ");
	}
}