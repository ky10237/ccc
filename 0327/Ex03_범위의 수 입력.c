#include <stdio.h>
#pragma warning (disable:4996)
int main() {

	
	int num;
	
	//while (1)
	//{
	//	printf("1~5 ������ �����Է�");
	//	scanf("%d", &num);
	//	
	//	if (num >= 1 && num <= 5)
	//	{
	//		break;
	//	}
	//}

	do
	{
		printf("1~5 ������ �����Է�");
		scanf("%d", &num);
	} while (num<1||num>5); //�ݺ��ϴ� ����-> �߸� �Է¹��� ���

	printf("\n����� %d�Դϴ�.\n",num);

	return 0;
}