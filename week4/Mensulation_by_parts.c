//구분구적법
/*#include <stdio.h>
#include <math.h>
double Function_fx(double x);
double Integral_fx(double a, double b);
int N;
double Delta;
void main()
{
	int i;
	double a, b, result;
	a = 1.0; b = 4.0;
	for (i = 0; i < 10; i++) {
		N = 2 + 2 * i; 
		Delta = fabs((b - a)) / (double)N; //fabs는 절댓값
		result = Integral_fx(a, b);
		printf("N=%d: result = %f \n", N, result);
	}
}
double Function_fx(double x)
{
	double value;
	value = exp(x) + pow(x, 3.0);//e에 x승 + x에 3승
	return value;
}
double Integral_fx(double a, double b)
{
	double sum = 0;
	if (a < b) {//b가 a보다 클때
		for (int i = 0; i < N; i++)
		{
			sum += Function_fx(a + Delta / 2 + i * Delta) * Delta;
		}
	}
	else if (a > b) {//a가 b보다 클때
		for (int i = 0; i < N; i++)
		{
			sum += Function_fx(b + Delta / 2 + i * Delta) * Delta;
		}
		sum = -sum;
	}
	return sum;
}*/