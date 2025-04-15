#include <stdio.h>
#pragma warning (disable:4996)

void number(int* m1, int* m2,int m);


int main() {

	int n1, n2, num;
	printf("두 수 입력: ");
	scanf("%d %d", &n1, &n2);
	printf("누적할 정수 입력: ");
	scanf("%d", &num);

	printf("입력 결과= %d, %d\n", n1, n2);

	number(n1, n2, num);


	printf("누적 결과= %d, %d\n", n1, n2);

	return 0;
}

void number(int* m1, int* m2, int m)
{
	*m1 += m;
	*m2 += m;
}