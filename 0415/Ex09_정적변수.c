#include <stdio.h>
#pragma warning (disable:4996)


void fun() {

	//����������?
	//1. static���� ����� ������ ����
	//2. main �Լ� ���� ���� �� �ѹ� �޸�(data segments)�� �Ҵ�ȴ�.
	//3. ���α׷��� ���� �� �� ���� ���� �� ������ �� ���� �����Ѵ�.
	
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