#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ifbingo(int checked[][4]);
//int changer(int checked[][4]);
void main()
{
	int num;
	int data = 0;
	int all[16];
	int checked[4][4] = { 0 };
	int k = 1;
	int bingo[4][4] = {0};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) { bingo[i][j] = k; k++; }
	}
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &data);
		int x = data / 4;
		int y = data % 4 - 1;
		checked[x][y] = 1;
	}
	
	//for (int i = 0; i < 4; i++) {
	//	for (int j = 0; j < 4; j++) {
	//		if (checked[i][j] == 0) {
	//			checked[i][j] = 1;
	//		}
	//	}
	//}

	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) printf("%2d", checked[i][j]);
		printf("\n");
	}

	printf("%d", ifbingo(checked));
	

}

//int changer(int checked[][4]) {
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (checked[i][j] == 0) {
//				checked[i][j] = 1;
//
//			}
//		}
//	}
//}

int ifbingo(int checked[][4]) {
	int bingonum = 0;
	int checkverti[4] = { 0 };
	int checkcross[2] = {0};
	int checkhorizon[4] = { 0 };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (checked[i][j] == 1)checkverti[j]++;
			if (checked[i][j] == 1)checkhorizon[i]++;
			
		}
		if (checked[i][i] == 1)checkcross[0]++;
	}
	for (int i = 0; i < 4; i++) {
		if (checked[i][3 - i])checkcross[1]++;
	}
	for (int i = 0; i < 4; i++) {
		if (checkhorizon[i] == 4)bingonum++;
		if (checkverti[i] == 4)bingonum++;
	}
	for (int i = 0; i < 2; i++) {
		if (checkcross[i] == 4)bingonum++;
	}
	return bingonum;
}