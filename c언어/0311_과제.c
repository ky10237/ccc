#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	//1����. ���� �Է¹޾� ���������� ���� ���Ͻÿ�.

    int start, end;
    int sum = 0;
    int n;

    printf("���� �� �Է�: ");
    scanf("%d", &start);

    printf("�� �� �Է�: ");
    scanf("%d", &end);

    n = end - start + 1;
    sum = n * (start + end) / 2;

    printf("(%d)���� (%d)������ ���� (%d) �Դϴ�.\n", start, end, sum);


	return 0;
}