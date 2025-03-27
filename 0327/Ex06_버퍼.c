#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int n;
	char c;

	printf("문자입력: ");
	scanf("%c", &c);
	while (getchar() != '\n');

	printf("정수입력: ");
	scanf("%d", &n);
	while (getchar() != '\n');

	printf("결과는 %c, %d입니다.\n", c, n);
	return 0;
}