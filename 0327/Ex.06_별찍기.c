#include <stdio.h>
#pragma warning (disable:4996)

int main(){

	int i, j;

	//for (i = 1; i <= 9; i++)
	//{
	//	if (i<=5)
	//	{
	//		for (j = 1; j <= i; j++)
	//		{
	//			printf("*");
	//		}
	//	}
	//	else
	//	{
	//		for (j = 1; j <= 10-i; j++)
	//		{
	//			printf("*");
	//		}
	//	}
	//	puts("");
	//}
	// 
	// 
		//for (i = 1; i <= 9; i++)
	//{
	//	if (i<=5)
	//	{
	//		for (j = 1; j <=6- i; j++)
	//		{
	//			printf("*");
	//		}
	//	}
	//	else
	//	{
	//		for (j = 1; j <= i-4; j++)
	//		{
	//			printf("*");
	//		}
	//	}
	//	puts("");
	//}


	/*int star = 5;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= star; j++)
		{
			printf("*");
		}
		puts("");

		if (i >= 5)
		{
			star++;
		}
		else 
		{
			star--;
		}

	}*/

	int star = 1;
	int hash = 4;
	/*for (i = 1; i <= 9; i++)
	{
		
		if (i <= 5)
		{
			for (j = 1; j <= 5 - i; j++)
			{
				printf(" ");
			}

			for (j = 1; j <= i; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (j = 1; j <= i-5; j++)
			{
				printf(" ");
			}

			for (j = 1; j <= 10-i; j++)
			{
				printf("*");
			}			
		}
		

		puts("");

		
	}*/

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= hash; j++)
		{
			printf("#");
		}
		for (j = 1; j <= star; j++)
		{
			printf("*");
		}
		puts("");

		i <= 4 ? (star++, hash--) : (star--, hash++);

	
	}


	return 0;
}