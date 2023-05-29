//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int unit(double a);
//int throw_4(double a);
//int mk_cur(int current_loc, int go, double a);
//void main(int argc, char* argv[]) {
//	double a = atof(argv[1]);
//	srand(time(NULL));
//	printf("도: 1 개: 2 걸: 3 윷: 4 모: 5\n");
//	int current_loc=0;
//	mk_cur((int)current_loc, throw_4(a), a);
//}
//int mk_cur(int current_loc, int go,double a) { //재귀함수
//	if (current_loc >= 65 && current_loc <= 90)printf("%d: %c -> ",go, current_loc);//알파벳일때
//	else
//		printf("%d: %d -> ", go,current_loc); //숫자일때
//	if (current_loc == 5) {
//		current_loc += go + 59;
//	}
//	else if (current_loc == 10 && go<=2) { // C를 넘지 않는 코드
//		current_loc += go + 75;
//	}
//	else if (current_loc == 10 && go == 3) { // C 도착코드
//		current_loc = 67;
//	}
//	else if (current_loc == 10 && go > 3) { // C를 넘는 코드
//		current_loc += 74 + go;
//	}
//	else if (current_loc == 15) {
//		current_loc += go;
//	}
//	else if (current_loc == 67) {//C일때
//		current_loc += go+20;
//	}
//	else {
//		current_loc += go;
//		if (current_loc >= 70 && current_loc <= 85) {
//			current_loc -= 55;//ABCDE라인에서 15 16 17라인으로 넘어갈때 아스키코드 변환
//		}
//	}
//
//	//종료조건
//	if (current_loc >= 90) {
//		printf("Z(end)");
//		return 0;
//	}
//	//종료조건
//	if (current_loc <= 24 && current_loc >= 20) {
//		printf("Z(end)");
//		return 0;
//	}
//	if(current_loc>=65&&current_loc<=90)printf("%c\n", current_loc);//알파벳일때
//	else
//		printf("%d\n", current_loc); //숫자일때
//	mk_cur((int)current_loc, throw_4(a), a);
//}
//
//int unit(double a) {//확률 a 참이면 1 거짓이면 0출력
//	double result =(double) rand() / (double)RAND_MAX;
//	if (result <= a) {
//		return 1;
//	}
//	else return 0;
//}
//int throw_4(double a) { // 4개의 윷을 던지고 up이면 1 down이면 0
//	//따라서 도: 1 개: 2 걸: 3 윷: 4 모: 5
//	int result = 0;
//	for (int i = 0; i < 4; i++)
//		result += unit(a);
//	if (result == 0) result = 5;
//	return result;
//}
