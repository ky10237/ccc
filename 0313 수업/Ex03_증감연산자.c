#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int n1, n2, large, small;
	printf("�� �� �Է�: ");
	scanf("%d %d", &n1, &n2);

	//���ǽ� ? ��1 : ��2
	large = n1 > n2 ? n1 : n2;
	small = n1 < n2 ? n1 : n2;
	
	printf("�� �� �� ū ���� %d�Դϴ�.\n", large);
	printf("�� �� �� ���� ���� %d�Դϴ�.\n", small);


	return 0;
}