#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int kor, eng, mat;
	double avg;
	char isExit;

	while (1)
	{
		printf("국, 영, 수 점수 입력: ");
		scanf("%d %d %d", kor, eng, mat);
		avg = (kor + eng + mat) / 3.0;
		
		

		printf("\n\t\t계속(아무키) / 종료(E/e): ");
		isExit = getchar();

		if (isExit == 'E' || isExit == 'e')
		{
			break; //무한 루프 탈출
		}
		
	}
	

	return 0;
}