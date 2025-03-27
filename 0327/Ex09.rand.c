#include <stdio.h>
#include <stdlib.h>
#include <time.h>  //시간관련
#pragma warning (disable:4996)
int main() 
{
	int num;

	//srand함수는 rand함수 사용 전 한 번만 호출(특히, 반복문 내에서 쓰지 않도록 주의)
	
	//time 함수: 1970년 자정이후로 1초씩 증가되는 값을 리턴 
	srand(time(NULL)); //rand 함수 초기화

	for (int i = 1; i <= 30; i++)
	{
		num = rand()%90+10;//0~32767사이 중 하나의 수를 추출
		printf("%d ", num);
	}puts("");
//-------------------------------------------
	for (int i = 1; i <= 10; i++)
	{
		num = rand()%31+50;//0~9사이 중 하나의 수를 추출
		printf("%d ", num);
	}puts("");
//-------------------------------------------
	for (int i = 1; i <= 100; i++)
	{
		num = rand() % 9+1;//0~9사이 중 하나의 수를 추출
		printf("%d ", num);
	}puts("");
//-------------------------------------------
	for (int i = 1; i <= 100; i++)
	{
		num = rand() % 26 + 65;//대문자 추출
		printf("%c ", num);
	}puts("");
//-------------------------------------------
	int begin, end;
	printf("\n\n랜덤 시작 수: ");
	scanf("%d", &begin);

	printf("\n\n랜덤 끝 수: ");
	scanf("%d", &end);

	printf("\n %d~%d사이의 랜덤한 수 100개", begin, end);

	for (int i = 1; i <= 100; i++)
	{
		num = rand() % (end - begin + 1) + begin;
		printf("%d", num);
	}puts("");

	return 0;
}