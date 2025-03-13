#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int num;

    printf("정수 입력하세요: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 4 == 0) {
        printf("%d은(는) 3의 배수 이면서, 4의 배수 입니다.\n", num);
    }
    else if (num % 3 == 0) 
    {
        printf("%d은(는) 3의 배수 입니다.\n", num);
    }
    else if (num % 4 == 0) 
    {
        printf("%d은(는) 4의 배수 입니다.\n", num);
    }
    else 
    {
        printf("%d은(는) 3의 배수도 4의 배수도 아닙니다.\n", num);
            }
       
	return 0;
}