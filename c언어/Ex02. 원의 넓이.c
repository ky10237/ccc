#include <stdio.h>

int main()
{
	int rad = 5;
	const double PI = 3.121592;
	double area, round;

	area = PI * rad * rad;
	printf("������ %d�� ���� ���̴� %.3f�Դϴ�.\n", rad, area);
	printf("������ %d�� ���� �ѷ��� %.3f�Դϴ�", rad,round);
	return 0;
}