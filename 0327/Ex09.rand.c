#include <stdio.h>
#include <stdlib.h>
#include <time.h>  //�ð�����
#pragma warning (disable:4996)
int main() 
{
	int num;

	//srand�Լ��� rand�Լ� ��� �� �� ���� ȣ��(Ư��, �ݺ��� ������ ���� �ʵ��� ����)
	
	//time �Լ�: 1970�� �������ķ� 1�ʾ� �����Ǵ� ���� ���� 
	srand(time(NULL)); //rand �Լ� �ʱ�ȭ

	for (int i = 1; i <= 30; i++)
	{
		num = rand()%90+10;//0~32767���� �� �ϳ��� ���� ����
		printf("%d ", num);
	}puts("");
//-------------------------------------------
	for (int i = 1; i <= 10; i++)
	{
		num = rand()%31+50;//0~9���� �� �ϳ��� ���� ����
		printf("%d ", num);
	}puts("");
//-------------------------------------------
	for (int i = 1; i <= 100; i++)
	{
		num = rand() % 9+1;//0~9���� �� �ϳ��� ���� ����
		printf("%d ", num);
	}puts("");
//-------------------------------------------
	for (int i = 1; i <= 100; i++)
	{
		num = rand() % 26 + 65;//�빮�� ����
		printf("%c ", num);
	}puts("");
//-------------------------------------------
	int begin, end;
	printf("\n\n���� ���� ��: ");
	scanf("%d", &begin);

	printf("\n\n���� �� ��: ");
	scanf("%d", &end);

	printf("\n %d~%d������ ������ �� 100��", begin, end);

	for (int i = 1; i <= 100; i++)
	{
		num = rand() % (end - begin + 1) + begin;
		printf("%d", num);
	}puts("");

	return 0;
}