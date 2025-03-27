#include <stdio.h>
#pragma warning (disable:4996)
int main() {

	int i;

	for (i = 1; i <= 100; i++)
	{
		printf("%d", i);
	}
	puts("");

	////////////

	i = 1;
	while (i <= 100)
	{
		printf("%d", i);
		i++;
	}
	puts("");

	///////////


	i = 1;
	do {
		printf("%d", i);
		i++;
	} while (i<=100);
	
	puts("");


	return 0;
}