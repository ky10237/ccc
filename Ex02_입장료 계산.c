#include <stdio.h>
#pragma warning (disable:4996)
int main() 
{
	int free = 3000;
	int age;

	printf("���̸� �Է����ּ���: ");
	scanf("&d", &age);

	if (age<=60)
	{
		free=0;
		printf("60�� �̻� ���������Դϴ�.");
	}

	printf("������ %d�� �Դϴ�.\n", free);


	return 0;
}