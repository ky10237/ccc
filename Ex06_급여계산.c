#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int moy, pluy;
	double see, sum;

	printf("기본급 입력: ");
	scanf("%d",&moy);
	
	printf("보너스 입력 : ");
	scanf("%d", &pluy);

	see = moy * 0.1; //세금 10%다
	sum = (moy+pluy)-see;

	printf("당신의 실 급여액은 %.0f 입니다.", sum);

	return 0;
}