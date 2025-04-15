#include <stdio.h>
#pragma warning <disable:4996>


void swap(int* p1, int* p2) {
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main() {

	int a = 3, b = 5;
	swap(&a, &b);
	printf("%d %d", a, b);

	return 0;
}