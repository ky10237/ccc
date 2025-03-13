#include <stdio.h>
#pragma warning(disable:4996)
int main() 
{
	int zim,
	const zimo=0;

	printf("짐의 무게를 입력하세요: ");	
	scanf("%d", &zim);
	
	if (zim <= 10 && zim <= 19)
	{
		printf("짐의 무게(kg): %d\n",zim);
		printf("수수료: 10,000원");
	}
	else if (zim <= 20 && zim <= 29)
	{
		printf("짐의 무게(kg): %d\n", zim);
		printf("수수료: 20,000원");
	}
	else if (zim <= 30 && zim <= 39)
	{
		printf("짐의 무게(kg): %d\n", zim);
		printf("수수료: 30,000원");
	}
	else if (zim <= 40 && zim <= 49)
	{
		printf("짐의 무게(kg): %d\n", zim);
		printf("수수료: 40,000원");
	}
	else
	{
		printf("50kg이상은 짐을 부칠 수 없습니다.");
	}
	return 0;
}