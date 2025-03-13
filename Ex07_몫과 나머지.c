#include <stdio.h>
#pragma warning(disable:4996)
int main() 
{
	int n1, n2, div, mod;

	printf("정수 두개 입력: ");
	scanf("%d %d", &n1, &n2);

	if (n2 == 0)
	{
		printf("0으로 나눌 수 없습니다.");
	}
	else {
		printf("나눌 수 있습니다.");
		div = n1 / n2;
		mod = n1 % n2;
		printf("%d이며 나머지는 %d입니다.", div,mod);
	}

	return 0;
}