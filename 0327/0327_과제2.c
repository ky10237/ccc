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

        // ���ڿ� 3, 6, 9�� ���ԵǾ� �ִ��� Ȯ��
        while (t > 0) {
            int digit = t % 10;
            if (digit == 3 || digit == 6 || digit == 9) {
                c = 1;
                break; // �ڼ� �� ���� ġ�� �ǹǷ� ���� ���� ����
            }
            t /= 10;
        }

        if (num >= 3) { // 1, 2�� �̹� ��������Ƿ� 3���� ���
            printf("%d", num);
            if (c) {
                printf(" �ڼ�");
            }
            printf("\n");
        }

        num++;
    }
	return 0;
}