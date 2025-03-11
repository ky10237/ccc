#include <stdio.h>

int main()
{
	int rad = 5;
	const double PI = 3.121592;
	double area, round;

	area = PI * rad * rad;
	printf("반지름 %d의 원의 넒이는 %.3f입니다.\n", rad, area);
	printf("반지름 %d의 원의 둘레는 %.3f입니다", rad,round);
	return 0;
}