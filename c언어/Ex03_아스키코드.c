#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char new = 'a';
	char bew = 'b';
	char vew = 'c';

	printf("���ĺ��� �Է��Ͻÿ�(�������� ����): ");
	scanf("% c % c % c", &new, &bew, &vew);
	printf("���� %c�� �ƽ�Ű�ڵ��? %d\n", new, new);


	return 0;
}