#include <stdio.h>
#pragma warning (disable:4996)
int main() 
{
	int t, m1, m2;

	while (1)
	{
		printf("�� �Է�: ");
		scanf("%d", &m1);

		if (m1 <= 0)
		{
			printf("0���� ū ���� �Է��ϼ���.");
			continue;
		}
		break;
	}
	t = m1 / 60;
	m2 = m1 % 60;
	printf("%d���� %d�ð� %d�� �Դϴ�.", m1, t, m2);

	
	

	return 0;
}