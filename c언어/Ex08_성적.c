#include <stdio.h>
int main()
{
	int kor = 97, eng = 79, math = 65;
	int sum = kor + eng + math;
	double avg = sum / 3.0;
	
	printf("����: %d \n����:%d \n����:%d \n����:%d \n ���:%f \n ���:B", kor, eng, math, sum, avg);
	return 0;
}