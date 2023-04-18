#include<stdio.h>
#include<math.h>
double distance(double x1, double y1, double x2, double y2);
void main() {
	FILE* fpt;
	fpt = fopen("input.txt.txt", "r"); //���Ͽ���
	if (fpt == NULL) { //������ ������ ����
		printf("file no");
		exit(1);
	}
	double min_x = 0; //�ּ� x��ǥ
	double min_y = 0; //�ּ� y��ǥ
	double min_distance = 100; //�ּ� ����
	int num; // ���� ����

	fscanf(fpt, "%d", &num); //���ǰ��� �Է�
	double data[10][2] = { 0 }; //���� ��ǥ �Է¹޴� 2���� �迭
	for (int i = 0; i < num; i++) {
		fscanf(fpt, "%lf %lf", &data[i][0], &data[i][1]); //��ǥ �Է¹ޱ�
	}
	for (double i = -10.0; i < 10.0; i = i + 0.1) { // x��ǥ -10.0���� 10.0���� 0.1�� ����
		for (double j = -10.0; j < 10.0; j += 0.1) {// y��ǥ -10.0���� 10.0���� 0.1�� ����
			double max_distance = 0; //���� i,j�� �ִ� ���� ������ ����
			for (int k = 0; k < num; k++) { //���� ������ŭ �ݺ�
				double result = distance(data[k][0], data[k][1], i, j); //�� ������ ���� ���ϰ� ���� �� ���̸� max_distance�� ����
				if (max_distance < result) {
					max_distance = result;
				}
			}
			// ���� �� ���̰� ���ݱ��� ���� �� ���̺��� ������ min_distance�� �� ���� �����ϰ� �׶��� x,y��ǥ ������
			if (max_distance < min_distance) {
				min_distance = max_distance;
				min_x = i;
				min_y = j;
			}
		}
	}
	if (-0.1 < min_x && min_x < 0.1) { // -0.0���� ��µǴ� ���� ����
		min_x = 0.0;
	}
	if (min_y > -0.1 && 0.1 > min_y) {
		min_y = 0.0;
	}
	printf("x��ǥ : %.1lf y��ǥ : %.1lf ���� ������ : %.1lf ���� ���� : %.1lf", min_x, min_y, min_distance, min_distance*min_distance); //��ǥ ���
}
double distance(double x1, double y1, double x2, double y2) { // ���������� ���� ���ϴ� ���Լ�
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}