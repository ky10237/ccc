#include <stdio.h>
#include <math.h>
#pragma warning (disable: 4996)
int main()
{
	double num, result;
	char isExit;

	while (1) //���ѷ����� ��Ʈ��.
	{
		printf("\n �������� ���� �� �Է�: ");
		scanf("%lf", &num);

		while (getchar() != '\n'); //���� ����

		if (num < 0)
		{
			printf("0���� ���� ���� �Է� ������ �� �����ϴ�.\n");
			continue; //�ݺ��� ������ �̵� continue �Ʒ��� ����� ���� x
		}

		result = sqrt(num);  //�������� ����.

		printf("%.2f�� �������� %.2f�Դϴ�.\n", num, result);
		printf("\n\t\t���(�ƹ�Ű) / ����(E/e): ");
		isExit = getchar();

		if (isExit == 'E' || isExit == 'e')
		{
			break; //���� ���� Ż��
		}
	}


	return 0;
}