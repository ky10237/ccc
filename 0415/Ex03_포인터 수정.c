#include <stdio.h>
#pragma warning <disable:4996>

void toUpper(char* p);
char getUpper(char C);


void toUpper(char* p) {
	if (*p >= 'a' && *p <= 'Z') {
		*p -= 32;
	}
}

char getUpper(char C)
{	
	if (C >= 'a' && C <= 'z') //소문자인 경우
		C -= 32;			//대문자로 변환
	return C;
}

int main() {

	char ch;
	printf("영문입력: ");
	ch = getchar();
	//toUpper(ch);
	
	ch = getUpper(ch);

	printf("결과는 %c입니다.\n", ch);
	return 0;
}