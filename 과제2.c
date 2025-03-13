#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int alltime, work, money=9620;
	double totalmoney;

	printf("근무시간을 입력하세요: ");
	scanf("%d", &alltime);

	printf("주간 근무시 1, 야간 근무시 2를 입력하세요: ");
	scanf("%d", &work);

	if (work == 1)
	{
		totalmoney = alltime*money;
		printf("당신의 이번달 총 급여는 %f원 입니다.", totalmoney);
	}
	else if (work == 2)
	{
		totalmoney = alltime *money * 1.5;
		printf("당신의 이번달 총 급여는 %0.f원 입니다.", totalmoney);
	}
	else 
	{
		printf("다시 입력하세요.");
	}

	return 0;
}
