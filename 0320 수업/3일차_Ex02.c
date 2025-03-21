#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i,n1, n2, n3;
	for (i=100;i<=500;i++)
	{
		n1 = i / 100;
		n2 = i % 100 / 10;
		n3 = i % 100 % 10;
		if (i == (n1 * n1 * n1) + (n2 * n2 * n2) + (n3 * n3 * n3))
		{
			printf("%d ", i);
		}
	}
	return 0;
}