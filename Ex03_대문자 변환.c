#include <stdio.h>
#pragma warning (disable:4996)
int main() 
{ 
	char alpha;
	printf("�����Է�: [ ]\b\b");
	//scanf("%c", &alpha);
	alpha=getchar();		//getchar(�����Է�)


    //if(alpha>=97 && alpha <=122)

	if (alpha >= 'a' && alpha <= 'z')
	{
		//�ҹ��ڸ� �빮�ڷ� /�ҹ���-�빮��=32�� ���� 
		alpha=alpha - 32;
		printf("�ҹ��ڸ� �빮�ڷ� ��ȯ�մϴ�.\n");
	}

	printf("�Է��� ���ڴ� %c", alpha);

	return 0; 
}