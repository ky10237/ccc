#include <stdio.h>
#pragma warning (disable:4996)
int main() 
{
	int t, m1, m2;

	while (1)
	{
		printf("분 입력: ");
		scanf("%d", &m1);

		if (m1 <= 0)
		{
			printf("0보다 큰 수를 입력하세요.");
			continue;
		}
		break;
	}
	t = m1 / 60;
	m2 = m1 % 60;
	printf("%d분은 %d시간 %d분 입니다.", m1, t, m2);

	
	

	return 0;
}