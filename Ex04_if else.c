#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int kor, eng, mat;
	printf("���� ���� ���� ���� �������� �Է�(���� ����): ");
	scanf("%d %d %d", &kor, &eng, &mat);
	//if (kor>=60 && eng>=60 && mat>=60)
	//{
	//	printf("��� ���� 60�� �̻��̹Ƿ� �հ�\n");
	//}
	//else //else �ڿ��� ����� ������ �� �� ����.
	//{
	//	printf("�� ���� �̻� 60�� �̸�, ���հ�\n");
	//}

	if (kor < 60 || eng < 60 || mat < 60)
	{
		printf("��� ���� 60�� �̻��̹Ƿ� �հ�\n");
	}
	else //else �ڿ��� ����� ������ �� �� ����.
	{
		printf("�� ���� �̻� 60�� �̸�, ���հ�\n");
	}
	return 0;
}