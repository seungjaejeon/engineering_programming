#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ifbingo(int checked[][4]);
void main(int argc, char *argv[])
{
	int max_bingo = 0;
	int data = 0;
	int max_i=0, max_j=0;
	int checked[4][4] = { 0 };
	int k = 1;
	int bingo[4][4] = {0};
	int remain_num = 2;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) { bingo[i][j] = k; k++; }
	}

	for (int i = 1; i < argc; i++) {
		data = atoi(argv[i]);
		int x = (data-1) / 4;
		int y = (data-1) % 4;
		checked[x][y] = 1;
	}
	/*최대의 빙고가 될 수 있는 두개의 수 넣어보기*/
	

	for (int i = 0; i < 16; i++) {
		if (checked[i / 4][i % 4] == 0)
		{
			checked[i / 4][i % 4] = 1;
			for (int j = 0; j < 16; j++) {
				if (checked[j / 4][j % 4] == 0) {
					checked[j / 4][j % 4] = 1;
					int cur_bingo = ifbingo(checked);
					if (max_bingo < cur_bingo) {
						max_bingo = cur_bingo;
						max_i = i;
						max_j = j;
					}
					checked[j / 4][j % 4] = 0;
				}
			}
			checked[i / 4][i % 4] = 0;
		}
	}

	printf("before : ");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) printf("%2d", checked[i][j]);
		printf("\n");
	}

	printf("max bingo = %d, new data: %d, %d\n", max_bingo, max_i+1,max_j+1);

	checked[max_i / 4][max_i % 4] = 1;
	checked[max_j / 4][max_j % 4] = 1;

	printf("after : ");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) printf("%2d", checked[i][j]);
		printf("\n");
	}


}

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