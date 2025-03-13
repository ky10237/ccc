#include <stdio.h>
#pragma warning (disable:4996)
int main() 
{ 
	char alpha;
	printf("문자입력: [ ]\b\b");
	//scanf("%c", &alpha);
	alpha=getchar();		//getchar(문자입력)


    //if(alpha>=97 && alpha <=122)

	if (alpha >= 'a' && alpha <= 'z')
	{
		//소문자를 대문자로 /소문자-대문자=32가 나옴 
		alpha=alpha - 32;
		printf("소문자를 대문자로 변환합니다.\n");
	}

	printf("입력한 문자는 %c", alpha);

	return 0; 
}