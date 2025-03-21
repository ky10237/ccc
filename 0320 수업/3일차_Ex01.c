#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int a, b, i, sum = 0;
    printf("수를 입력해주세요(공백 구분): ");
    scanf("%d %d", &a, &b);

    sum = a;
    printf("%d", a);
    for (i = a + 1; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            printf(" - ");
            sum = sum - i;
        }
        else
        {
            printf(" + ");
            sum = sum + i;
        }
        printf("%d", i);

    }
    printf(" = %d", sum);
    return 0;
}