#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(int argc, char* argv[])
{
	FILE* fp;
	fp = fopen("result_auto.csv", "w");
	double R = 0;
	int out[31] = { 0 };
	int k = 0;
	int init_data = atoi(argv[1]);
	int S[5] = {0};
	int S_temp[5] = { 0 };
	for (int i = 0; i < 5;i++) {
		S[i] = init_data % 2;
		S_temp[i] = S[i];
		init_data /= 2;
	}
	for (int i = 0; i <= 30; i++) 
	{

		out[i] = 1-2*S_temp[4];
		S[4] = S_temp[3];
		S[3] = S_temp[2];
		S[2] = S_temp[1];
		S[0] = S_temp[1]^S_temp[4];
		S[1] = S_temp[0];
		S_temp[4] = S[4];
		S_temp[3] = S[3];
		S_temp[2] = S[2];
		S_temp[1] = S[1];
		S_temp[0] = S[0];
	}
	for (int i = 0; i < 31; i++) printf("%d ", out[i]);

	for (int i = -30; i <= 30; i++) {
		R = 0;
		for (int j = 0; j <= 30; j++) {
			k = i + j;
			if (j + i > 30) k = j + i - 31;
			if (j + i < 0) k = j + i + 31;
			R += out[j] * out[k];
		}
		fprintf(fp,"\n%lf", R/31);
	}
	
}
