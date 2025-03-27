#include <stdio.h>
#pragma warning (disable:4996)
int main() {

	int i, j, sum;

	for (i=1;i<=91;i+=10)
	{
		sum = 0;

		for (j = i; j <= i + 9; j++) 
		{
		
			printf("%5d", j);

			sum = sum + j;


			if (j % 10 == 0)
			{
				printf("=");
			}
			else
			{
				printf("+");
			}

		}
		puts("");
	}


	return 0;
}