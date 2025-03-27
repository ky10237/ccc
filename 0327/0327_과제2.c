#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num = 1;

    printf("1\n");
    printf("2\n");

    while (num <= 100) {
        int t = num;
        int c = 0;

        // 숫자에 3, 6, 9가 포함되어 있는지 확인
        while (t > 0) {
            int digit = t % 10;
            if (digit == 3 || digit == 6 || digit == 9) {
                c = 1;
                break; // 박수 한 번만 치면 되므로 내부 루프 종료
            }
            t /= 10;
        }

        if (num >= 3) { // 1, 2는 이미 출력했으므로 3부터 출력
            printf("%d", num);
            if (c) {
                printf(" 박수");
            }
            printf("\n");
        }

        num++;
    }
	return 0;
}