#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n1;
	printf("���ڸ� �Է����ּ���: ");
	scanf("%d", &n1);

	//�ܹ��� ��� �߰�ȣ {}�� ���� �����ϴ�

	if (n1 % 2 == 0) 
	{
		printf("%d�� ¦���Դϴ�.", n1);
	}
	else {
		printf("%d�� Ȧ���Դϴ�.", n1);
	}
	return 0;
}