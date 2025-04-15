#include <stdio.h>
#pragma warning (disable:4996)

char getGrade(int score);
void returnGrade(int score,char* p);

int main() {
	int score;
	printf("점수입력: ");
	scanf("%d", &score);

	char grade;
	//getGrade함수: 등급을 구해 리턴하는 함수
	//grade = getGrade(score);

	returnGrade(score, &grade);

	printf("%d점 => %c등급\n", score, grade);

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
