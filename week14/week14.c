//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<time.h>
//#define CLT_N 25
//double Gaussian(int i);
//double Uniform2();
//void main(int argc, char *argv[]) 
//{
//
//	FILE* fpt;
//	int prob[101] = { 0 };
//	double result = 0;
//	fpt = fopen("result_2.csv", "w");
//	srand(time(NULL));
//    double rv, pdf;
//	printf("%d\n", prob[0]);
//	for (int i = 0; i < 1000000; i++) {
//		rv = Gaussian(i);
//		prob[(int)((rv + 5) / 0.1)]++;
//	}
//	printf("%d", prob[0]);
//    for (int i = 0; i < 100; i++) {
//        fprintf(fpt,"%2.2lf, %2.2lf, ", -5.0 + i * 0.1, -5.0 + (i + 1) * 0.1);
//        fprintf(fpt,"%lf\n", (double)prob[i] / 1000000 /0.1);
//    }
//	fclose(fpt);
//}
//double Gaussian(int i)
//{
//	static double rv2, rv1;
//	double y;
//	if(i%2==1){
//		return rv2;
//	}
//	else
//	{
//		while (1) {
//			rv1 = Uniform2();
//			rv2 = Uniform2();
//			y = (rv1 * rv1) + (rv2 * rv2);
//			if (y < 1&&y>0) {
//				break;
//			}
//		}
//		double factor = sqrt(-2.0 * (log(y) / y));
//		rv1 = rv1 * factor;
//		rv2 = rv2 * factor;
//		return rv1;
//		
//	}
//}
//double Uniform2()
//{
//	double rv;
//	rv = 2*(double)rand() / (double)RAND_MAX;
//	return (rv - 1);
//}