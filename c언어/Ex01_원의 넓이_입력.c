#include <stdio.h>

//c언어는 50년이 넘어서 대부분 함수에서 안정성의 이유로 4996의 오류 발생됨
//이 오류를 방지하기 위해 아래 명령을 추가함
#pragma warning(disable:4996)

/*
%d: 정수
%f: float형 실수
%lf:double형 실수 (퍼센트 입력 할 때)
*/

int main()
{
	int rad = 5;
	const double PI = 3.121592;
	double area, round;
	
	printf("원의 반지름을 입력 하세요: ");
	scanf("%d",&rad);		//변수명 앞에 반드시 &연산자를 쓴다.

	area = PI * rad * rad;
	round = 2 * PI * rad;
	printf("반지름 %d의 원의 넒이는 %.3f입니다.\n", rad, area);
	printf("반지름 %d의 원의 둘레는 %.3f입니다. \n", rad, round);

	return 0;
}