#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int num, total=0;

	while (1) 
	{
		printf("정수 입력: ");
		scanf("%d", &num);
	
		if (num == 0)
		{
			break;
		}
		total = total + num;
		
	}
	printf("정수의 합: %d", total);
	puts("");




	return 0;
}