//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//void cover(int num, int start);
//
//int data[10][10]; int A;
//int y = 0;
//int x=0; //������ �ε���
//void main(int argc, char* argv[])
//{
//	int index, num;
//	if (argc != 2) {
//		printf("main.exe A (4 <= A <= 10) \n");
//		exit(1);
//	}
//	A = atoi(argv[1]);
//	if ((A < 4) || (A > 10)) {
//		printf("main.exe A (4 <= A <= 10) \n");
//		exit(1);
//	}
//	cover(A, 0);
//}
//
//void cover(int num, int start) {//num = A�� �� �Է°�, start�� �ѹ��� ���۰� 
//	if (num <= 0) {
//		for (int i = 0; i < A; i++) {
//			for (int j = 0; j < A; j++) printf("%2d ", data[i][j]);
//			printf("\n");
//		}
//		return;
//	}
//	if (num == 1) {
//		data[y][x] = start;
//		for (int i = 0; i < A; i++) {
//			for (int j = 0; j < A; j++) printf("%2d ", data[i][j]);
//			printf("\n");
//		}
//		return;
//	}
//	for (int i = 0; i < num-1; i++) { //������ ������
//		data[y][x] = start;
//		start++; x++;
//	}
//	for (int i = 0; i < num-1; i++) { //�����ʿ��� �Ʒ�
//		data[y][x] = start;
//		start++; y++;
//	}
//	for (int i = 0; i < num-1; i++) { //�Ʒ��ʿ��� ����
//		data[y][x] = start;
//		start++; x--;
//	}
//	for (int i = 0; i < num-1; i++) { //���ʿ��� ����
//		data[y][x] = start;
//		start++; y--;
//	}
//	y += 1;
//	x += 1;
//	cover(num - 2, start);
//}