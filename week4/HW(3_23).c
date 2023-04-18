#include<stdio.h>
#include<math.h>
#define PI 3.1415926535897 //PI값 정의
void main() {
	int a, b, c;
	double temp = 0;
	scanf("%d %d %d", &a, &b, &c); // a, b, c값 입력
	double f[9];
	int index[9];
	for (int i = 0; i < 9; i++) {
		f[i] = a * exp(0.1 * i) + b * cos(0.2 * i * PI) + c * log(i / 3.0 + 1); // 식 구현
		index[i] = i; // 정렬된 f(x)값에 해당하는 x값을 출력하기 위해서 새로운 배열 하나 구현
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) { //오름차순 정렬 버블솔트
			if (f[j] > f[j + 1]) {
				temp = f[j + 1];
				f[j + 1] = f[j];
				f[j] = temp;
				temp = index[j + 1];//정렬할때 x값도 같은 인덱스로 정렬해줌으로서 x값 출력가능
				index[j + 1] = index[j];
				index[j] = temp;
			}
		}
	}

	//출력부
	printf("f(x): ");
	for (int i = 0; i < 9; i++) {
		printf("  %lf  ", f[i]);
	}
	printf("\nx: ");
	for (int i = 0; i < 9; i++) {
		printf("       %d     ", index[i]);
	}
}