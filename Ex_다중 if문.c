#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int kor, eng, mat;
	double avg;
	char grade;

	printf("���� ���� ���� ���� �������� �Է�(���� ����): ");
	scanf("%d %d %d", &kor, &eng, &mat);

	avg = (kor + eng + mat) / 3.0;
	printf("���=%.2f\n", avg);

	if (avg >= 90)
	{
		grade = 'A';
	}
	else if(avg>=80)
	{
		grade = 'B';
	}
	else if (avg >= 70)
	{
		grade = 'C';
	}
	else if (avg >= 60)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
	printf("��� %c", grade);

	return 0;
}