#include <stdio.h>
#pragma warning (disable:4996)

void number(int* m1, int* m2,int m);


int main() {

	int n1, n2, num;
	printf("�� �� �Է�: ");
	scanf("%d %d", &n1, &n2);
	printf("������ ���� �Է�: ");
	scanf("%d", &num);

	printf("�Է� ���= %d, %d\n", n1, n2);

	number(n1, n2, num);


	printf("���� ���= %d, %d\n", n1, n2);

	return 0;
}

void number(int* m1, int* m2, int m)
{
	*m1 += m;
	*m2 += m;
}