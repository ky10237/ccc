#include <stdio.h>
int main()
{
	//상수: 고정된 값, 한번 값을 설정하면 변경 불가 const<-못바꿈
	//상수는 반드시 선언하면서 초기화돼야 한다. 선언된 공간은 쓰레기값으로 채워지기 때문
	//대문자로 기초로 쓴다._로 구분 해서 하는 건 파스칼 표기법
	const int con = 5;
	//con = 7; //error


	int var = 546;
	var = -12;
	var = 777;
	printf("변수 =%d\n", var);

	return 0;
}