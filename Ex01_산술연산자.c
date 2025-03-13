#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int minute, hour, che;
	printf("분을 입력: ");
	scanf("%d", &minute);
	hour = minute/60;
	che = hour % 60;
	printf("입력하신 %d분은 총 %d시간 %d 입니다.", minute, hour, che);


	return 0;
}