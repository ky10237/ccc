#include <stdio.h>
#pragma warning(disable:4996)
int main() 
{
	int zim,
	const zimo=0;

	printf("���� ���Ը� �Է��ϼ���: ");	
	scanf("%d", &zim);
	
	if (zim <= 10 && zim <= 19)
	{
		printf("���� ����(kg): %d\n",zim);
		printf("������: 10,000��");
	}
	else if (zim <= 20 && zim <= 29)
	{
		printf("���� ����(kg): %d\n", zim);
		printf("������: 20,000��");
	}
	else if (zim <= 30 && zim <= 39)
	{
		printf("���� ����(kg): %d\n", zim);
		printf("������: 30,000��");
	}
	else if (zim <= 40 && zim <= 49)
	{
		printf("���� ����(kg): %d\n", zim);
		printf("������: 40,000��");
	}
	else
	{
		printf("50kg�̻��� ���� ��ĥ �� �����ϴ�.");
	}
	return 0;
}