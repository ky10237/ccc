#include <stdio.h>
#pragma warning <disable:4996>

int main() {

	int* p;
	int i = 3, j;

	p = &i;
	j = *p;
	j++;

	printf("1. %d\n", *p);
	printf("2. %p\n", p);
	printf("3. %d\n\n", j); 

	p = &j;

	printf("4. %d\n", *p);
	printf("5. %p\n", p);

	*p = *p + 3;

	printf("6. %d\n", i);
	printf("7. %d\n", j);
	printf("8. %d\n\n", *p);

	return 0;
}