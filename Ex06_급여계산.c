#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int moy, pluy;
	double see, sum;

	printf("�⺻�� �Է�: ");
	scanf("%d",&moy);
	
	printf("���ʽ� �Է� : ");
	scanf("%d", &pluy);

	see = moy * 0.1; //���� 10%��
	sum = (moy+pluy)-see;

	printf("����� �� �޿����� %.0f �Դϴ�.", sum);

	return 0;
}