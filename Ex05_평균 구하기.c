#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, b;
	double c, d;

	printf("정수 2개 입력하세요.공백으로 구분 : \n");
	scanf("%d %d", &a, &b);

	printf("실수 2개 입력하세요.공백으로 구분 : \n");
	scanf("%lf %lf", &c, &d);

	double ss = (a + b) / 2;
	double gg = (c + d) / 2;

	printf("정수값의 평균은 %.2f이며, 실수값의 평균은 %2f입니다.\n", ss, gg);

	return 0;
}