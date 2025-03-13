#include <stdio.h>
#pragma warning (disable:4996)
int main() 
{
	int free = 3000;
	int age;

	printf("나이를 입력해주세요: ");
	scanf("&d", &age);

	if (age<=60)
	{
		free=0;
		printf("60세 이상 무료입장입니다.");
	}

	printf("입장료는 %d원 입니다.\n", free);


	return 0;
}