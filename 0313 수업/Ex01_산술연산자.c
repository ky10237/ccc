#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int minute, hour, che;
	printf("���� �Է�: ");
	scanf("%d", &minute);
	hour = minute/60;
	che = hour % 60;
	printf("�Է��Ͻ� %d���� �� %d�ð� %d �Դϴ�.", minute, hour, che);


	return 0;
}