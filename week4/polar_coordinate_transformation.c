//극좌표 변환 atan 사용
#include<stdio.h>
#include<math.h>
#define PI 3.1415926535897
double transform(double a, double b);
void main() {
	double a = 0;
	double b = 0;
	double r=0;
	double phase=0;
	printf("input 0,0 will exit program\n");
	while (1) {
		printf("a = ");
		scanf("%lf", &a);//입력
		printf("b = ");
		scanf("%lf", &b);
		if (a == 0 && b == 0) break;
		r = sqrt(pow(a, 2) + pow(b, 2));
		phase = transform(a, b);
		printf(" => amp = %.4lf, phase = %.1lf\n",r, phase); //출력
	}
}
double transform(double a, double b) {
	double phase = 0;
	if (a == 0 || b == 0) {
	}
	if (b / a > 0) {
		if (a <= 0&&b<=0) {//3사분면
			phase = atan(b / a);
			phase = phase * 180 / PI;
			phase += 180;
			printf("3");
		}
		else phase = atan(b / a) * 180 / PI;//1사분면
	}
	else if (b / a < 0){ 
		if (a>=0&&b<=0) {//4사분면
			phase = atan(-a/b);
			phase = phase * 180 / PI;
			phase += 270;
			printf("4");
		}
		if (a<=0&&b >= 0) { //2사분면
			phase = atan(-a / b) * 180 / PI; 
			phase += 90;
			printf("2");
		}
	}
	
	return phase;
}
//극좌표 변환 atan2 사용
//#include<stdio.h>
//#include<math.h>
//#define PI 3.1415926535897
//double transform(double a, double b);
//void main() {
//	double a = 0;
//	double b = 0;
//	double r = 0;
//	double phase = 0;
//	printf("input 0,0 will exit program\n");
//	while (1) {
//		printf("a = ");
//		scanf("%lf", &a);//입력
//		printf("b = ");
//		scanf("%lf", &b);
//		if (a == 0 && b == 0) break;
//		r = sqrt(pow(a, 2) + pow(b, 2));
//		phase = transform(a, b);
//		printf(" => amp = %.4lf, phase = %.1lf\n", r, phase); //출력
//	}
//}
//double transform(double a, double b) {
//	double phase = 0;
//	if (b / a < 0) {
//		if (b < 0) { //4사분면
//			phase = atan2(b, a);
//			phase = phase * 180 / PI;
//			phase += 360;
//		}
//		else if (b > 0) {//2사분면
//			phase = atan2(b, a) * 180 / PI;
//		}
//	}
//	else if (b / a > 0) {
//		if (a < 0) {//3사분면
//			phase = atan2(b, a);
//			phase = phase * 180 / PI;
//			phase = phase + 360;
//		}
//		else phase = atan2(b, a) *180 / PI;//1사분면
//	}
//	return phase;
//}