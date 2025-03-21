#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i, j, k;

	for (i = 1; i <= 7; i++)
	{

		for (k = 1; k <= 7; k++)
		{
			if (k==8-i)
			{
				printf("%d ", k);
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
		
		
	

	return 0;
}