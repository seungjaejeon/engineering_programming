#include<stdio.h>
#include<math.h>
double distance(double x1, double y1, double x2, double y2);
void main() {
	FILE* fpt;
	fpt = fopen("input.txt.txt", "r"); //파일오픈
	if (fpt == NULL) { //파일이 없으면 종료
		printf("file no");
		exit(1);
	}
	double min_x = 0; //최소 x좌표
	double min_y = 0; //최소 y좌표
	double min_distance = 100; //최소 길이
	int num; // 점의 개수

	fscanf(fpt, "%d", &num); //점의개수 입력
	double data[10][2] = { 0 }; //점의 좌표 입력받는 2차원 배열
	for (int i = 0; i < num; i++) {
		fscanf(fpt, "%lf %lf", &data[i][0], &data[i][1]); //좌표 입력받기
	}
	for (double i = -10.0; i < 10.0; i = i + 0.1) { // x좌표 -10.0부터 10.0까지 0.1씩 증가
		for (double j = -10.0; j < 10.0; j += 0.1) {// y좌표 -10.0부터 10.0까지 0.1씩 증가
			double max_distance = 0; //점과 i,j의 최대 길이 저장할 변수
			for (int k = 0; k < num; k++) { //점의 개수만큼 반복
				double result = distance(data[k][0], data[k][1], i, j); //각 점마다 길이 비교하고 가장 긴 길이를 max_distance에 저장
				if (max_distance < result) {
					max_distance = result;
				}
			}
			// 가장 긴 길이가 지금까지 가장 긴 길이보다 작으면 min_distance에 그 길이 저장하고 그때의 x,y좌표 저장함
			if (max_distance < min_distance) {
				min_distance = max_distance;
				min_x = i;
				min_y = j;
			}
		}
	}
	if (-0.1 < min_x && min_x < 0.1) { // -0.0으로 출력되는 현상 방지
		min_x = 0.0;
	}
	if (min_y > -0.1 && 0.1 > min_y) {
		min_y = 0.0;
	}
	printf("x좌표 : %.1lf y좌표 : %.1lf 원의 반지름 : %.1lf 원의 넓이 : %.1lf", min_x, min_y, min_distance, min_distance*min_distance); //좌표 출력
}
double distance(double x1, double y1, double x2, double y2) { // 두점사이의 길이 구하는 부함수
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}