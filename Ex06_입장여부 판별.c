#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int age, level;

	printf("���̸� �Է����ּ���: ");
	scanf("%d", &age);

	printf("������ �Է����ּ���: ");
	scanf("%d", &level);


	if (age >= 18 && level>=1400 && level<=1600)
	{
		printf("����ƽ��ϴ�.");
	}
	else {
		printf("���� �Ұ��Դϴ�.");
	}

	return 0;
}   