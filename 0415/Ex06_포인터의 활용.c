#include <stdio.h>
#pragma warning (disable:4996)

char getGrade(int score);
void returnGrade(int score,char* p);

int main() {
	int score;
	printf("�����Է�: ");
	scanf("%d", &score);

	char grade;
	//getGrade�Լ�: ����� ���� �����ϴ� �Լ�
	//grade = getGrade(score);

	returnGrade(score, &grade);

	printf("%d�� => %c���\n", score, grade);

	return 0;
}

char getGrade(int score)
{
	if (score <= 100 && score >= 90)
		return 'A';
	else if (score >= 80)
		return 'B';
	else if (score >= 70)
		return 'C';
	else if (score >= 60)
		return 'D';
	else
		return 'F';
}

void returnGrade(int score, char* p)
{
	if (score <= 100 && score >= 90)
		*p ='A';
	else if (score >= 80)
		*p = 'B';
	else if (score >= 70)
		*p = 'C';
	else if (score >= 60)
		*p = 'D';
	else
		*p = 'F';
}
