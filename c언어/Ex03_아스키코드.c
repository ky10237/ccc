#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char new = 'a';
	char bew = 'b';
	char vew = 'c';

	printf("알파벳을 입력하시오(공백으로 구분): ");
	scanf("% c % c % c", &new, &bew, &vew);
	printf("문자 %c의 아스키코드는? %d\n", new, new);


	return 0;
}