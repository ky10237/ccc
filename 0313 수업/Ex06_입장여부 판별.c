#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int age, level;

	printf("나이를 입력해주세요: ");
	scanf("%d", &age);

	printf("내공을 입력해주세요: ");
	scanf("%d", &level);


	if (age >= 18 && level>=1400 && level<=1600)
	{
		printf("입장됐습니다.");
	}
	else {
		printf("입장 불가입니다.");
	}

	return 0;
}   