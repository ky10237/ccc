#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	//1문제. 수를 입력받아 등차수열의 합을 구하시오.

    int start, end;
    int sum = 0;
    int n;

    printf("시작 값 입력: ");
    scanf("%d", &start);

    printf("끝 값 입력: ");
    scanf("%d", &end);

    n = end - start + 1;
    sum = n * (start + end) / 2;

    printf("(%d)부터 (%d)사이의 합은 (%d) 입니다.\n", start, end, sum);


	return 0;
}