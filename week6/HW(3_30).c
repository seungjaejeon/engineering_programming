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
	int arr[] = { a,b,c,d,e }; //�迭�� ����
	// + : 43, * : 42, - : 45, / : 47
	int result = cal(arr, argv[6][0]); //���Լ� cal
	printf("%d\n", result); //������
}

//�迭�� �Է¹ް� �迭�ȿ� �ִ� �� ���� f�����ڷ� ��� ������ �ڿ� ���� ū ���밪 ����� �����ϴ� �Լ�
int cal(int arr[], char f) {
	int result = 0;
	if (f == '+') { //+�϶�
		for (int i = 0; i < 4; i++) {
			for (int j = i + 1; j < 5; j++) {
				if (fabs(result) < fabs(arr[i] + arr[j])) {
					result = arr[i] + arr[j];
				}
			}
		}
	}
	else if (f == '-') { // - �϶�
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 5; j++) {
				if (fabs(result) < fabs(arr[i] - arr[j])) {
					result = arr[i] - arr[j];
				}
			}
		}
	}
	else if (f == '*') { // *�϶�
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 5; j++) {
				if (fabs(result) < fabs(arr[i] * arr[j])) {
					result = arr[i] * arr[j];
				}
			}
		}
	}
	else if (f == '/') { // /�϶�
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 5; j++) {
				if (arr[j] == 0) continue; //������ ���� 0�̸� �Ѿ��
				if (fabs(result) < fabs(arr[i] / arr[j])) {
					result = arr[i] / arr[j];
				}
				if (arr[i] == 0) continue; //������ ���� 0�̸� �Ѿ��
				if (fabs(result) < fabs(arr[j] / arr[i])) {
					result = arr[j] / arr[i];
				}
			}
		}
	}
	else result = 1; // �����ڰ� ������ �ʾ�����
	return result; //��� ����
}