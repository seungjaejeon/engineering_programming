//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//void cross(int y,int x);
//int data[10][10]; int A;
//int start=0;
//void main(int argc, char* argv[])
//{
//	int index, num;
//	
//	if (argc != 2) {
//		printf("main.exe A (4 <= A <= 10) \n");
//		exit(1);
//	}
//	A = atoi(argv[1]);
//	if ((A < 4) || (A > 10)) {
//		printf("main.exe A (4 <= A <= 10) \n");
//		exit(1);
//	}
//	
//	int y = 0;
//	int x = 0; //현재의 인덱스
//	for (int i = 0; i < A; i++) {
//		cross(0, i);
//	}
//	for (int i = 1; i < A; i++) {
//		cross(i, A-1);
//	}
//	for (int i = 0; i < A; i++) {
//		for (int j = 0; j < A; j++) printf("%2d ", data[i][j]);
//		printf("\n");
//	}
//}
//void cross(int y, int x) {
//	int a = x;
//	int b = y;
//	if (y == 0) {
//		for (int i = 0; i < a + 1; i++){
//			data[y][x] = start;
//			start++; y++; x--;
//		}
//	}
//	else if (x == A - 1) {
//		for (int i = 0; i < A-b; i++) {
//			data[y][x] = start;
//			start++; y++; x--;
//		}
//	}
//}