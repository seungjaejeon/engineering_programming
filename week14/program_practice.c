//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<time.h>
//#define CLT_N 25
//double Gaussian();
//double Uniform2();
//void main(int argc, char* argv[])
//{
//	FILE* fpt;
//	int prob[100] = { 0 };
//	double result = 0;
//	fpt = fopen("result.csv", "w");
//	srand(time(NULL));
//
//	int i;
//	double rv, pdf;
//	for (i = 0; i < 1000000; i++) {
//		rv = sqrt(2) * Gaussian();
//		if (rv > 5.0 || rv < -5.0) {
//			continue;
//		}
//		prob[(int)((rv + 5) / 0.1)]++;
//	}
//	for (i = 0; i < 100; i++) {
//		fprintf(fpt, "%2.2lf, %2.2lf, ", -5.0 + i * 0.1, -5.0 + (i + 1) * 0.1);
//		fprintf(fpt, "%lf\n", ((double)prob[i] / 1000000)/0.1);
//	}
//
//	fclose(fpt);
//}
//double Gaussian()
//{
//	int i;
//	double alpha, rv;
//	alpha = (double)CLT_N * 12.;
//	alpha = sqrt(alpha);
//	rv = 0.0;
//	for (i = 0; i < CLT_N; i++) rv = rv + Uniform2();
//	rv = (alpha * rv) / (double)CLT_N;
//	return rv;
//}
//double Uniform2()
//{
//	double rv;
//	rv = (double)rand() / (double)RAND_MAX;
//	return (rv - 0.5);
//}