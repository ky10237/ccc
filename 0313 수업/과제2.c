#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int alltime, work, money=9620;
	double totalmoney;

	printf("�ٹ��ð��� �Է��ϼ���: ");
	scanf("%d", &alltime);

	printf("�ְ� �ٹ��� 1, �߰� �ٹ��� 2�� �Է��ϼ���: ");
	scanf("%d", &work);

	if (work == 1)
	{
		totalmoney = alltime*money;
		printf("����� �̹��� �� �޿��� %f�� �Դϴ�.", totalmoney);
	}
	else if (work == 2)
	{
		totalmoney = alltime *money * 1.5;
		printf("����� �̹��� �� �޿��� %0.f�� �Դϴ�.", totalmoney);
	}
	else 
	{
		printf("�ٽ� �Է��ϼ���.");
	}

	return 0;
}
