#include<stdio.h>
#include <stdlib.h>

void main()
{
	int first_value, second_value; //값 입력 받을 변수
	char operator[2]; //연산자 입력 받을 변수 enter가 입력되는 상황을 막기위해서 사이즈가 2인 배열로 설정
	FILE* fpt1;//파일
	FILE* fpt2;
	FILE* fpt_op;
	fpt1 = fopen("input1.txt", "r");//input1 read
	fpt2 = fopen("input3.txt", "r");//input3 read
	fpt_op = fopen("input2.txt", "r");//input2 read
	if (fpt1 == NULL || fpt2 == NULL || fpt_op == NULL) {//파일이 없을경우 에러 발생
		printf("File Open Error !! \n");
		exit(1);
	}
	for (int i = 0; i < 5; i++) { //0부터 4까지
		fscanf(fpt1, "%d", &first_value);//input1 값 first_value에 입력
		fscanf(fpt2, "%d", &second_value);//input3 값 second_value에 입력
		fscanf(fpt_op, "%s", operator);//input2 값 operator에 입력
		
		printing(first_value, second_value, operator); //printing 함수 호출
	}
	fclose(fpt1);//파일참조 종료
	fclose(fpt2);
	fclose(fpt_op);
}
int cal(arg1, arg2) {//cal함수 정의 매개변수 값 2개
	int count = 0;//나누기 카운팅
	int temp = arg2;//뒤에 붙일 값 temp에 저장
	while (temp > 0) {//temp가 0 이상일때
		temp = temp / 10; //temp의 자릿수를 구하기 위해 카운팅
		count++;
	}
	int result = 0;
	while (count>0)//count가 0이 될때 까지
	{
		arg1 *= 10;//앞에 붙일 값에 10을 곱해줌
		count--;
	}
	result = arg1 + arg2;//결과변수에 합친값을 저장
	return result;//합친값 리턴
}

int printing(int arg1, int arg2, char op[]) {//값 1, 2와 operator 입력
	int result = 0;
	if (op[0] == '@') {
		result = cal(arg1, arg2) + 9;//cal 호출 result에 값 저장
	}
	else if (op[0] == '#') {
		result = cal(arg2, arg1) - 9;//cal 호출 result에 값 저장
	}
	else {
		printf("error\n");//다른 값이 입력되면 error
	}
	FILE* fpt;//파일
	fpt = fopen("result.txt", "a");//파일 쓰기위해서 open
	fprintf(fpt, "%d\n", result);//파일에 result변수 출력
	fclose(fpt);//파일 종료

	return 0;
}
