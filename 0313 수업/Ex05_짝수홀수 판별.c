#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n1;
	printf("숫자를 입력해주세요: ");
	scanf("%d", &n1);

	//단문인 경우 중괄호 {}는 생략 가능하다

	if (n1 % 2 == 0) 
	{
		printf("%d는 짝수입니다.", n1);
	}
	else {
		printf("%d는 홀수입니다.", n1);
	}
	return 0;
}