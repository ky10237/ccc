#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	
	int num;
	printf("�����Է�: ");
	scanf("%d", &num);

	if(num<0)//���� ������ ��� 
	{
		num *= -1;	//���� ������ ��ȯ
		printf("���� ������ ���� ������ ��ȯ�մϴ�.\n");
	}

	printf("����� %d�Դϴ�.\n", num);
	
	return 0;
}