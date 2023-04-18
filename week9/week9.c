//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//void cover(int num, int start);
//
//int data[10][10]; int A;
//int y = 0;
//int x=0; //현재의 인덱스
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
//void cover(int num, int start) {//num = A값 즉 입력값, start는 한바퀴 시작값 
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
//	for (int i = 0; i < num-1; i++) { //위에서 오른쪽
//		data[y][x] = start;
//		start++; x++;
//	}
//	for (int i = 0; i < num-1; i++) { //오른쪽에서 아래
//		data[y][x] = start;
//		start++; y++;
//	}
//	for (int i = 0; i < num-1; i++) { //아래쪽에서 왼쪽
//		data[y][x] = start;
//		start++; x--;
//	}
//	for (int i = 0; i < num-1; i++) { //왼쪽에서 위로
//		data[y][x] = start;
//		start++; y--;
//	}
//	y += 1;
//	x += 1;
//	cover(num - 2, start);
//}