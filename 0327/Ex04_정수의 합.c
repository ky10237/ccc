#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int num, total=0;

	while (1) 
	{
		printf("���� �Է�: ");
		scanf("%d", &num);
	
		if (num == 0)
		{
			break;
		}
		total = total + num;
		
	}
	printf("������ ��: %d", total);
	puts("");




	return 0;
}