#include <stdio.h>
#pragma warning(disable:4996)
int main() 
{
	int n1, n2, div, mod;

	printf("���� �ΰ� �Է�: ");
	scanf("%d %d", &n1, &n2);

	if (n2 == 0)
	{
		printf("0���� ���� �� �����ϴ�.");
	}
	else {
		printf("���� �� �ֽ��ϴ�.");
		div = n1 / n2;
		mod = n1 % n2;
		printf("%d�̸� �������� %d�Դϴ�.", div,mod);
	}

	return 0;
}