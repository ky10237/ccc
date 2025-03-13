#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int item, money, change, name, one;
	
	printf("물건값 입력: ");
	scanf("%d", &item);
	printf("지불액 입력: ");
	scanf("%d", &money);

	change = money - item;

	printf("거스름 돈은 %d입니다.\n", change);

	name = change/1000;
	one = (name % 1000)/100;

	printf("1000원권 %d장을 지불합니다\n100원 %d를 지불합니다.", name, one);
	

	return 0;
}