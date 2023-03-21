#include<stdio.h>
#include <stdlib.h>

void main()
{
	int first_value, second_value; //�� �Է� ���� ����
	char operator[2]; //������ �Է� ���� ���� enter�� �ԷµǴ� ��Ȳ�� �������ؼ� ����� 2�� �迭�� ����
	FILE* fpt1;//����
	FILE* fpt2;
	FILE* fpt_op;
	fpt1 = fopen("input1.txt", "r");//input1 read
	fpt2 = fopen("input3.txt", "r");//input3 read
	fpt_op = fopen("input2.txt", "r");//input2 read
	if (fpt1 == NULL || fpt2 == NULL || fpt_op == NULL) {//������ ������� ���� �߻�
		printf("File Open Error !! \n");
		exit(1);
	}
	for (int i = 0; i < 5; i++) { //0���� 4����
		fscanf(fpt1, "%d", &first_value);//input1 �� first_value�� �Է�
		fscanf(fpt2, "%d", &second_value);//input3 �� second_value�� �Է�
		fscanf(fpt_op, "%s", operator);//input2 �� operator�� �Է�
		
		printing(first_value, second_value, operator); //printing �Լ� ȣ��
	}
	fclose(fpt1);//�������� ����
	fclose(fpt2);
	fclose(fpt_op);
}
int cal(arg1, arg2) {//cal�Լ� ���� �Ű����� �� 2��
	int count = 0;//������ ī����
	int temp = arg2;//�ڿ� ���� �� temp�� ����
	while (temp > 0) {//temp�� 0 �̻��϶�
		temp = temp / 10; //temp�� �ڸ����� ���ϱ� ���� ī����
		count++;
	}
	int result = 0;
	while (count>0)//count�� 0�� �ɶ� ����
	{
		arg1 *= 10;//�տ� ���� ���� 10�� ������
		count--;
	}
	result = arg1 + arg2;//��������� ��ģ���� ����
	return result;//��ģ�� ����
}

int printing(int arg1, int arg2, char op[]) {//�� 1, 2�� operator �Է�
	int result = 0;
	if (op[0] == '@') {
		result = cal(arg1, arg2) + 9;//cal ȣ�� result�� �� ����
	}
	else if (op[0] == '#') {
		result = cal(arg2, arg1) - 9;//cal ȣ�� result�� �� ����
	}
	else {
		printf("error\n");//�ٸ� ���� �ԷµǸ� error
	}
	FILE* fpt;//����
	fpt = fopen("result.txt", "a");//���� �������ؼ� open
	fprintf(fpt, "%d\n", result);//���Ͽ� result���� ���
	fclose(fpt);//���� ����

	return 0;
}
