#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cal(int arr[], char f);
void main(int argc, char* argv[]) {
	if (argc != 7) {
		printf(" main [#1][#2][#3][#4][#5][#6] \n");
		exit(1);
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	int d = atoi(argv[4]);
	int e = atoi(argv[5]);
	int arr[] = { a,b,c,d,e }; //배열로 묶음
	// + : 43, * : 42, - : 45, / : 47
	int result = cal(arr, argv[6][0]); //부함수 cal
	printf("%d\n", result); //결과출력
}

//배열을 입력받고 배열안에 있는 수 들을 f연산자로 모두 연산한 뒤에 가장 큰 절대값 결과를 리턴하는 함수
int cal(int arr[], char f) {
	int result = 0;
	if (f == '+') { //+일때
		for (int i = 0; i < 4; i++) {
			for (int j = i + 1; j < 5; j++) {
				if (fabs(result) < fabs(arr[i] + arr[j])) {
					result = arr[i] + arr[j];
				}
			}
		}
	}
	else if (f == '-') { // - 일때
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 5; j++) {
				if (fabs(result) < fabs(arr[i] - arr[j])) {
					result = arr[i] - arr[j];
				}
			}
		}
	}
	else if (f == '*') { // *일때
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 5; j++) {
				if (fabs(result) < fabs(arr[i] * arr[j])) {
					result = arr[i] * arr[j];
				}
			}
		}
	}
	else if (f == '/') { // /일때
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 5; j++) {
				if (arr[j] == 0) continue; //나누는 수가 0이면 넘어간다
				if (fabs(result) < fabs(arr[i] / arr[j])) {
					result = arr[i] / arr[j];
				}
				if (arr[i] == 0) continue; //나누는 수가 0이면 넘어간다
				if (fabs(result) < fabs(arr[j] / arr[i])) {
					result = arr[j] / arr[i];
				}
			}
		}
	}
	else result = 1; // 연산자가 들어오지 않았을때
	return result; //결과 리턴
}