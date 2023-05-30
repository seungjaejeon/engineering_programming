#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define CLT_N 25
#define PI 3.141592
double Gaussian();
double Uniform2();
void main(int argc, char* argv[])
{
	FILE* fpt;
	double x, y;
	int z_100[100] = { 0 };
	int theta_100[100] = { 0 };
	double result = 0;
	fpt = fopen("result_assignment.csv", "w");
	srand(time(NULL));
	double rv, pdf;
	for (int i = 0; i < 1000000; i++) {
		//x, y값 생성 이를 토대로 z와 theta 계산
		x = Gaussian();
		y = Gaussian();
		double z = sqrt(x * x + y * y);
		double theta = atan2(y, x);
		if (z < 9 && z > 0) {
			for (int j = 0; j < 100; j++) {
				if (z <= (j + 1) * 0.09 && z >= j * 0.09) {
					z_100[j]++;//z
				}
			}
		}
		theta = theta * (180.0 / PI);
		theta_100[(int)((theta + 180) / 3.6)]++;//theta
		
	}
	for (int i = 0; i < 100; i++) {//출력
		fprintf(fpt,"%lf, %lf, %.2lf, %.2lf\n",0.09*i, (i * 3.6) - 180,(double)z_100[i]/1000000/0.09, (double)theta_100[i] / 1000000);
	}
	fclose(fpt);
}
double Gaussian() //root(3)*rv로 리턴
{
	int i;
	double alpha, rv;
	alpha = (double)CLT_N * 12.;
	alpha = sqrt(alpha);
	rv = 0.0;
	for (i = 0; i < CLT_N; i++) rv = rv + Uniform2();
	rv = (alpha * rv) / (double)CLT_N;
	return sqrt(3)*rv;
}
double Uniform2()
{
	double rv;
	rv = (double)rand() / (double)RAND_MAX;
	return (rv - 0.5);
}