#include <stdio.h>
#pragma warning (disable:4996)
int main() {

	int a = 10, b = 3;
	double result, d=3.54;

	//형변환(casting): 일시적으로 자료형을 변환(완전히 변환x)
	result = (double)a / b;
	printf("result=%f\n", result);


	printf("정수부=%d\n", (int)d); //(int)로 형변환 하면 소수점은 잘려버림
	printf("소수부=%f\n", d- (int)d);
	return 0;
}