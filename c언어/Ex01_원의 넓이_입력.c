#include <stdio.h>

//c���� 50���� �Ѿ ��κ� �Լ����� �������� ������ 4996�� ���� �߻���
//�� ������ �����ϱ� ���� �Ʒ� ����� �߰���
#pragma warning(disable:4996)

/*
%d: ����
%f: float�� �Ǽ�
%lf:double�� �Ǽ� (�ۼ�Ʈ �Է� �� ��)
*/

int main()
{
	int rad = 5;
	const double PI = 3.121592;
	double area, round;
	
	printf("���� �������� �Է� �ϼ���: ");
	scanf("%d",&rad);		//������ �տ� �ݵ�� &�����ڸ� ����.

	area = PI * rad * rad;
	round = 2 * PI * rad;
	printf("������ %d�� ���� ���̴� %.3f�Դϴ�.\n", rad, area);
	printf("������ %d�� ���� �ѷ��� %.3f�Դϴ�. \n", rad, round);

	return 0;
}