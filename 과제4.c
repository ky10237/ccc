#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int jum;
	printf("점수 입력: ");
	scanf("%d", &jum);
	if (jum >= 90 || jum >= 100) 
	{
		printf("당신의 등급은 A입니다.");
	}
	else if (jum >= 80 || jum >= 89)
	{
		printf("당신의 등급은 B입니다.");
	}
	else if (jum >= 70 || jum >= 79)
	{
		printf("당신의 등급은 C입니다.");
	}
	else if (jum >= 60 || jum >= 69)
	{
		printf("당신의 등급은 D입니다.");
	}
	else 
	{
		printf("당신의 등급은 F입니다.");
	}
    return 0;
}
