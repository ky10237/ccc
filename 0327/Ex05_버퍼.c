#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	char c1, c2, c3;

	printf("���� �Է�1: ");
	c1 = getchar();

	//������ ���� ������ ��� ������
	/*while (1)
	{
		char temp = getchar();
		if (temp == '\n')
		{
			break;
		}
	}*/

	/*while (1)
	{
		if (getchar() == '\n')
		{
			break;
		}
	}*/

	while (getchar() != '\n'); //���ۿ��� ������ �ѱ��ڰ� \n�� �ƴ϶�� �ݺ�


	printf("���� �Է�2: ");
	c2 = getchar();

	while (1)
	{
		char temp = getchar();
		if (temp == '\n')
		{
			break;
		}
	}

	printf("���� �Է�3: ");
	c3 = getchar();

	printf("\n\n *���*\n");
	printf("����: %c => �ƽ�Ű �ڵ�: %d\n", c1, c1);
	printf("����: %c => �ƽ�Ű �ڵ�: %d\n", c2, c2);
	printf("����: %c => �ƽ�Ű �ڵ�: %d\n", c3, c3);



	return 0;
}