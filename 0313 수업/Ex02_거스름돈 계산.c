#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int item, money, change, name, one;
	
	printf("���ǰ� �Է�: ");
	scanf("%d", &item);
	printf("���Ҿ� �Է�: ");
	scanf("%d", &money);

	change = money - item;

	printf("�Ž��� ���� %d�Դϴ�.\n", change);

	name = change/1000;
	one = (name % 1000)/100;

	printf("1000���� %d���� �����մϴ�\n100�� %d�� �����մϴ�.", name, one);
	

	return 0;
}