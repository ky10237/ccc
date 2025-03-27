#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n1, n2, n3, n4 = 0, n5;

	srand(time(NULL));
	for (int i = 1; i <= 10; i++)
	{
		n1 = rand() % 10;
		n2 = rand() % 10;

		printf("%2d. %d + %d = ", i, n1, n2);
		if (scanf_s("%d", &n3) != 1) {
			printf("입력 오류가 발생했습니다.\n");
			return 1;
		}
		while (getchar() != '\n');
		
		if (n1 + n2 == n3)
		{
			n4++;
		}

	}
	n5 = n4 * 10;
	printf("총 10문제 중 정답은 %d개 입니다.\n", n4);
	printf("당신의 점수는 %d점입니다.\n", n5);

	return 0;
}
