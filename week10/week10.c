//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//#define INIT 0
//
//double filter(double input, int mode);
//void main(int argc, char* argv[])
//{
//	int a;
//	FILE* fpt;
//	fpt = fopen("res.txt", "w");
//	double y[20], x[20];
//	if (argc != 2) {
//		printf(" main [Initial Value (0~7)] \n"); exit(1);
//	}
//	a = atoi(argv[1]);
//	for (int i = 0; i < 20; i++) {
//		x[i] = a * pow(0.9, i);
//	}
//	double temp = filter(0.0, 0);
//	for (int n = 0; n < 20; n++) y[n] = filter(x[n], 1);
//	for (int n = 0; n < 20; n++) {
//		printf("%d	%lf\n", n,y[n]);
//		fprintf(fpt, "%d, %lf\n", n, y[n]);
//	}
//	fclose(fpt);
//}	
//double filter(double input, int mode)
//{
//	double output;
//	static double S[2] = { 0 };
//	if (mode == INIT) {
//		output = -1 * input;
//		S[1] = (0.5 * output) + S[0] + (4 * input);
//		S[0] = (-0.25 * output) + (-3 * input);
//
//	}
//	else {
//		output = -1 * input + S[1];
//		S[1] = (0.5 * output) + S[0] + (4 * input);
//		S[0] = (-0.25 * output) + (-3 * input);
//	}
//	return output;
//}