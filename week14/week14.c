//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<time.h>
//#define CLT_N 25
//double Gaussian();
//double Uniform2();
//static double rv2, rv1;
//static int i = 0;
//void main(int argc, char *argv[]) 
//{
//	FILE* fpt;
//	int prob[101] = { 0 };
//	double result = 0;
//	fpt = fopen("result_2.csv", "w");
//	srand(time(NULL));
//	
//    double rv, pdf;
//	printf("%d\n", prob[0]);
//	for (i = 0; i < 500000; i++) {
//		Gaussian();
//		if (i % 2 == 1)prob[(int)((rv1 + 5) / 0.1)]++;
//		else prob[(int)((rv2 + 5) / 0.1)]++;
//	}
//	printf("%d", prob[0]);
//    for (i = 0; i < 100; i++) {
//        fprintf(fpt,"%2.2lf, %2.2lf, ", -5.0 + i * 0.1, -5.0 + (i + 1) * 0.1);
//        fprintf(fpt,"%lf\n", (double)prob[i] / 1000000/0.1);
//    }
//	
//	fclose(fpt);
//}
//double Gaussian()
//{
//	double alpha,y;
//	rv1 = Uniform2();
//	rv2 = Uniform2();
//	y = (rv1 * rv1) + (rv2 * rv2);
//	if (y > 1) {
//		Gaussian();
//	}
//	else {
//		double factor = sqrt(-2.0 * (log(y) / y));
//		rv1 =rv1* factor;
//		rv2 =rv2* factor;
//	}
//}
//double Uniform2()
//{
//	double rv;
//	rv = 2*(double)rand() / (double)RAND_MAX;
//	return (rv - 1);
//}