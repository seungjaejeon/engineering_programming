//���б�����
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
		Delta = fabs((b - a)) / (double)N; //fabs�� ����
		result = Integral_fx(a, b);
		printf("N=%d: result = %f \n", N, result);
	}
}
double Function_fx(double x)
{
	double value;
	value = exp(x) + pow(x, 3.0);//e�� x�� + x�� 3��
	return value;
}
double Integral_fx(double a, double b)
{
	double sum = 0;
	if (a < b) {//b�� a���� Ŭ��
		for (int i = 0; i < N; i++)
		{
			sum += Function_fx(a + Delta / 2 + i * Delta) * Delta;
		}
	}
	else if (a > b) {//a�� b���� Ŭ��
		for (int i = 0; i < N; i++)
		{
			sum += Function_fx(b + Delta / 2 + i * Delta) * Delta;
		}
		sum = -sum;
	}
	return sum;
}*/