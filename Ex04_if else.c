#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int kor, eng, mat;
	printf("국어 영어 수학 점수 연속으로 입력(공백 구분): ");
	scanf("%d %d %d", &kor, &eng, &mat);
	//if (kor>=60 && eng>=60 && mat>=60)
	//{
	//	printf("모든 과목 60점 이상이므로 합격\n");
	//}
	//else //else 뒤에는 절대로 조건은 쓸 수 없다.
	//{
	//	printf("한 과목 이상 60점 미만, 불합격\n");
	//}

	if (kor < 60 || eng < 60 || mat < 60)
	{
		printf("모든 과목 60점 이상이므로 합격\n");
	}
	else //else 뒤에는 절대로 조건은 쓸 수 없다.
	{
		printf("한 과목 이상 60점 미만, 불합격\n");
	}
	return 0;
}