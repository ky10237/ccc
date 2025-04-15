#include <stdio.h>
#pragma warning (disable:4996)


void fun() {

	//정적변수란?
	//1. static으로 선언된 변수를 말함
	//2. main 함수 수행 전에 딱 한번 메모리(data segments)에 할당된다.
	//3. 프로그램이 실행 될 때 부터 종료 될 때까지 그 값을 유지한다.
	
	static int a = 1;
	int x = 10;
	printf("%d\n", a++);
}

void dummy() {
	int x = 2;
}

int main() {

	fun();
	fun();
	fun();

	return 0;
}