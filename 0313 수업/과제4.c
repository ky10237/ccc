#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int jum;
	printf("���� �Է�: ");
	scanf("%d", &jum);
	if (jum >= 90 || jum >= 100) 
	{
		printf("����� ����� A�Դϴ�.");
	}
	else if (jum >= 80 || jum >= 89)
	{
		printf("����� ����� B�Դϴ�.");
	}
	else if (jum >= 70 || jum >= 79)
	{
		printf("����� ����� C�Դϴ�.");
	}
	else if (jum >= 60 || jum >= 69)
	{
		printf("����� ����� D�Դϴ�.");
	}
	else 
	{
		printf("����� ����� F�Դϴ�.");
	}
    return 0;
}
