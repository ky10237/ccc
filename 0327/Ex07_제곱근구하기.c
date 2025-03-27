#include <stdio.h>
#include <math.h>
#pragma warning (disable: 4996)
int main()
{
	double num, result;
	char isExit;

	while (1) //무한루프에 빠트림.
	{
		printf("\n 제곱근을 구할 수 입력: ");
		scanf("%lf", &num);

		while (getchar() != '\n'); //버퍼 비우기

		if (num < 0)
		{
			printf("0보다 작은 수는 입력 받으실 수 없습니다.\n");
			continue; //반복문 끝으로 이동 continue 아래의 명령은 수행 x
		}

		result = sqrt(num);  //제곱근을 구함.

		printf("%.2f의 제곱근은 %.2f입니다.\n", num, result);
		printf("\n\t\t계속(아무키) / 종료(E/e): ");
		isExit = getchar();

		if (isExit == 'E' || isExit == 'e')
		{
			break; //무한 루프 탈출
		}
	}


	return 0;
}