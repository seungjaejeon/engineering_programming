//#include<stdio.h>
//#include<string.h>
//
//void bingo(int binary_vals[]);
//int ifbingo(int checkd[][5]);
//// 비트를 왼쪽으로 circular shift하는 함수
//void circular_shift_left(int binary_vals[], int shift_amount) {
//    int shifted_val[32] = { 0 }; // 쉬프트된 결과를 담을 배열
//    for (int i = 0; i < 32; i++) {
//        int shifted_index = (i + shift_amount) % 32; // 순환하도록 인덱스 계산
//        shifted_val[i] = binary_vals[shifted_index]; // 새로운 배열에 순환된 값을 저장
//    }
//    for (int i = 0; i < 32; i++) {
//        binary_vals[i] = shifted_val[i]; // 기존 배열에 순환된 결과를 저장
//    }
//}
//
//void main(int argc, char* argv[]) {
//    char* str = argv[1]; // 문자열 인자
//    int shift_amount = atoi(argv[2]); // 숫자 인자
//
//    int binary_vals[32] = { 0 }; // 2진수로 변환한 값들을 담을 배열
//    int index = 0;
//    for (int i = 0; i < 4; i++) {
//        int val = (int)str[i];
//        for (int j = 7; j >= 0; j--) {
//            binary_vals[index++] = (val >> j) & 1; // 문자열을 2진수 배열로 변환하여 저장
//        }
//    }
//	printf("input : ");
//	for (int i = 0; i < 32; i++) {
//		if (i % 8 == 0) printf("  ");
//		printf("%d", binary_vals[i]);
//	}
//	
//    circular_shift_left(binary_vals, shift_amount); // 순환 쉬프트 함수 호출
//
//    // 순환 쉬프트된 2진수 배열을 출력
//	printf("\nShift : ");
//	for (int i = 0; i < 32; i++) {
//		if (i % 8 == 0) printf("  ");
//		printf("%d", binary_vals[i]);
//		
//    }
//	bingo(binary_vals);
//
//}
//
//void bingo(int binary_vals[]) {
//	int max_bingo = 0;
//	int data = 0;
//	int max_i = 0, max_j = 0;
//	int checked[5][5] = { 0 };
//	int k = 1;
//	int bingo[5][5] = { 0 };
//	int remain_num = 2;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) { bingo[i][j] = k; k++; }
//	}
//	printf("\nLocation : ");
//	for (int i = 31; i > 5; i--) {
//		data = binary_vals[i];
//		if (data == 1)
//		{
//			int k = 30 - i;
//			int x = k / 5;
//			int y = k % 5;
//			checked[x][y] = 1;
//			printf("%d ", k+1);
//		}
//	}
//	printf("\n");
//	/*최대의 빙고가 될 수 있는 두개의 수 넣어보기*/
//
//
//	for (int i = 0; i < 25; i++) {
//		if (checked[i / 5][i % 5] == 0)
//		{
//			checked[i / 5][i % 5] = 1;
//			for (int j = 0; j < 25; j++) {
//				if (checked[j / 5][j % 5] == 0) {
//					checked[j / 5][j % 5] = 1;
//					int cur_bingo = ifbingo(checked);
//					if (max_bingo < cur_bingo) {
//						max_bingo = cur_bingo;
//						max_i = i;
//						max_j = j;
//					}
//					checked[j / 5][j % 5] = 0;
//				}
//			}
//			checked[i / 5][i % 5] = 0;
//		}
//	}
//
//	printf("\nbefore : \n");
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) printf("%2d", checked[i][j]);
//		printf("\n");
//	}
//
//	printf("max bingo = %d, new data: %d, %d\n", max_bingo, max_i + 1, max_j + 1);
//
//	checked[max_i / 5][max_i % 5] = 1;
//	checked[max_j / 5][max_j % 5] = 1;
//
//	printf("after : \n");
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) printf("%2d", checked[i][j]);
//		printf("\n");
//	}
//}
//
//int ifbingo(int checked[][5]) {
//    int bingonum = 0;
//    int checkverti[5] = { 0 };
//    int checkcross[2] = { 0 };
//    int checkhorizon[5] = { 0 };
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            if (checked[i][j] == 1)checkverti[j]++;
//            if (checked[i][j] == 1)checkhorizon[i]++;
//
//        }
//        if (checked[i][i] == 1)checkcross[0]++;
//    }
//    for (int i = 0; i < 5; i++) {
//        if (checked[i][4 - i])checkcross[1]++;
//    }
//    for (int i = 0; i < 5; i++) {
//        if (checkhorizon[i] == 5)bingonum++;
//        if (checkverti[i] == 5)bingonum++;
//    }
//    for (int i = 0; i < 2; i++) {
//        if (checkcross[i] == 5)bingonum++;
//    }
//    return bingonum;
//}