#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, b;
	double c, d;

	printf("���� 2�� �Է��ϼ���.�������� ���� : \n");
	scanf("%d %d", &a, &b);

	printf("�Ǽ� 2�� �Է��ϼ���.�������� ���� : \n");
	scanf("%lf %lf", &c, &d);

	double ss = (a + b) / 2;
	double gg = (c + d) / 2;

	printf("�������� ����� %.2f�̸�, �Ǽ����� ����� %2f�Դϴ�.\n", ss, gg);

	return 0;
}