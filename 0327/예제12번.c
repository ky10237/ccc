#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int kor, eng, mat;
	double avg;
	char isExit;

	while (1)
	{
		printf("��, ��, �� ���� �Է�: ");
		scanf("%d %d %d", kor, eng, mat);
		avg = (kor + eng + mat) / 3.0;
		
		

		printf("\n\t\t���(�ƹ�Ű) / ����(E/e): ");
		isExit = getchar();

		if (isExit == 'E' || isExit == 'e')
		{
			break; //���� ���� Ż��
		}
		
	}
	

	return 0;
}