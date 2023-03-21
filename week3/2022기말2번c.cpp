/*#include<stdio.h>
int bit2(int num) {
	int op = 1,i=0;
	int num2[32] = {0};
	while (1) {
		if (num & op) {
			num2[i] = 1;
		}
		i++;
		op *= 2;
		if (i == 32) {
			break;
		}
	}
	for (i = 0; i < 32; i++) {
		printf("%d", num2[i]);
	}
	return 0;
}
void main() {
	int A, B, C, D;
	scanf("%d %d %d %d", &A, &B, &C, &D);
	printf("A	=	%d	=>	%\nB	=	%d	=>	\nC	=	%d	=>	\nD	=	%d	=>	\n", A, B, C, D);
	bit2(A);
}
*/