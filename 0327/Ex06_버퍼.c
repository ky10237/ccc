#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int n;
	char c;

	printf("�����Է�: ");
	scanf("%c", &c);
	while (getchar() != '\n');

	printf("�����Է�: ");
	scanf("%d", &n);
	while (getchar() != '\n');

	printf("����� %c, %d�Դϴ�.\n", c, n);
	return 0;
}