#include <stdio.h>
#pragma warning (disable:4996)
int main() {

	//sizeof: byte를 구하는 연산자
	
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(double));
	printf("%zd\n", sizeof(char));
	printf("%zd\n", sizeof(999));

	return 0;
}