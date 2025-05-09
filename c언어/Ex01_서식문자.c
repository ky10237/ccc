
/*
서식문자
1. %d: 10진 정수를 출력
2. %f: 고정소수점(소수점 이하 6자리) 출력
3. %c: 문자 출력

*/

#include <stdio.h>

int main()
{
	//변수 선언은 항상 선두에 있어야 한다.
	//변수 선언: 공간을 할당받는 작업
	int num, result;
	double d = 46.274; //변수 선언시 초기화 작업까지 수행
	char ch = 'd'; //'' 문자형 변수 선언

	//변수 초기화: 값을 대입하는 작업
	num = 1234;
	result = num * 234;

	printf("num은 정수이며, 값은 %d입니다\n",num);
	printf("%d*234=%d\n", num, result);
	printf("실수 d = %f\n", d);
	printf("실수 d = %.2f\n", d);
	printf("실수 d = %.1f\n", d);
	printf("문자 ch =%c, 문자의 아스키 코드 %d \n", ch, ch);
	return 0;
}
