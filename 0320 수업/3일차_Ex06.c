#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
    int i, j, k;

    for(i=1;i<=7;++i)
    {
        for (j=1;j<=7-i;j++)
     
            printf(" ");
        {
            for (k = 1; k <= i; ++k)
            {
                if (i % 2 == 1)
                {
                    printf("%d ", i);
                }
                else
                {
                    printf("* ");
                }
            }
            puts("");
        }
    }

	return 0;
}