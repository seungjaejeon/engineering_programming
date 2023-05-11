#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Bernoulli(double p);
int binomial(int n, double p);
void main(int argc, char* argv[]) {
	FILE* fpt;
	fpt = fopen("output_pmf.csv", "w");
	srand(time(NULL));
	int n = atoi(argv[1]);
	double p = atof(argv[2]);
	double* result = (double*)calloc(n+1,sizeof(double));
	for (int i = 0; i < 10000000; i++) {
		result[binomial(n, p)]++;
	}
	for(int i=0;i<=n;i++)
		fprintf(fpt,"%d, %lf\n", i,result[i]/10000000);
}
int binomial(int n, double p) {
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		count += Bernoulli(p);
	}
	return count;
}
int Bernoulli(double p) {
	double rv = (double)rand() / (double)RAND_MAX;
	if (rv <= p) return 1;
	else return 0;
}