//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int unit(double a);
//int throw_4(double a);
//int mk_cur(int current_loc, int go, double a);
//void main(int argc, char* argv[]) {
//	double a = atof(argv[1]);
//	srand(time(NULL));
//	printf("��: 1 ��: 2 ��: 3 ��: 4 ��: 5\n");
//	int current_loc=0;
//	mk_cur((int)current_loc, throw_4(a), a);
//}
//int mk_cur(int current_loc, int go,double a) { //����Լ�
//	if (current_loc >= 65 && current_loc <= 90)printf("%d: %c -> ",go, current_loc);//���ĺ��϶�
//	else
//		printf("%d: %d -> ", go,current_loc); //�����϶�
//	if (current_loc == 5) {
//		current_loc += go + 59;
//	}
//	else if (current_loc == 10 && go<=2) { // C�� ���� �ʴ� �ڵ�
//		current_loc += go + 75;
//	}
//	else if (current_loc == 10 && go == 3) { // C �����ڵ�
//		current_loc = 67;
//	}
//	else if (current_loc == 10 && go > 3) { // C�� �Ѵ� �ڵ�
//		current_loc += 74 + go;
//	}
//	else if (current_loc == 15) {
//		current_loc += go;
//	}
//	else if (current_loc == 67) {//C�϶�
//		current_loc += go+20;
//	}
//	else {
//		current_loc += go;
//		if (current_loc >= 70 && current_loc <= 85) {
//			current_loc -= 55;//ABCDE���ο��� 15 16 17�������� �Ѿ�� �ƽ�Ű�ڵ� ��ȯ
//		}
//	}
//
//	//��������
//	if (current_loc >= 90) {
//		printf("Z(end)");
//		return 0;
//	}
//	//��������
//	if (current_loc <= 24 && current_loc >= 20) {
//		printf("Z(end)");
//		return 0;
//	}
//	if(current_loc>=65&&current_loc<=90)printf("%c\n", current_loc);//���ĺ��϶�
//	else
//		printf("%d\n", current_loc); //�����϶�
//	mk_cur((int)current_loc, throw_4(a), a);
//}
//
//int unit(double a) {//Ȯ�� a ���̸� 1 �����̸� 0���
//	double result =(double) rand() / (double)RAND_MAX;
//	if (result <= a) {
//		return 1;
//	}
//	else return 0;
//}
//int throw_4(double a) { // 4���� ���� ������ up�̸� 1 down�̸� 0
//	//���� ��: 1 ��: 2 ��: 3 ��: 4 ��: 5
//	int result = 0;
//	for (int i = 0; i < 4; i++)
//		result += unit(a);
//	if (result == 0) result = 5;
//	return result;
//}
