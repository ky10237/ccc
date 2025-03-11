#include <stdio.h>
int main()
{
	int kor = 97, eng = 79, math = 65;
	int sum = kor + eng + math;
	double avg = sum / 3.0;
	
	printf("국어: %d \n영어:%d \n수학:%d \n총점:%d \n 평균:%f \n 등급:B", kor, eng, math, sum, avg);
	return 0;
}