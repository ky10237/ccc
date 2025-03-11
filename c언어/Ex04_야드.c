#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	const double ONE_YARD = 0.9144;
	double yard, meter;

	printf("야드 입력: ");
	scanf("%lf", &yard);

	meter = yard * ONE_YARD;

	printf("%fyard = > % fmeter\n", yard, meter);

	return 0;
}