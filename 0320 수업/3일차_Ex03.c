#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i, total;
	total = 0;

	for (i = 1; i <= 10; i++)
	{
		printf("%d",i);	
		total = total + i;
	} 
	printf("= %d\n", total);

	i = 0;
	total = 0;
	for (i = 20; i <= 30; i++)
	{
		printf("%d", i);
		total = total + i;
	}
	printf("= %d\n", total);

	i = 0;
	total = 0;
	for (i = 30; i <= 40; i++)
	{
		printf("%d", i);
		total = total + i;
	}
	printf("= %d\n", total);

	i = 0;
	total = 0;
	for (i = 40; i <= 50; i++)
	{
		printf("%d", i);
		total = total + i;
	}
	printf("= %d\n", total);



	return 0;
}