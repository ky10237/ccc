#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int me, com;

    srand(time(NULL));
    printf("*** 가위 / 바위 / 보 게임 ***\n\n");

    do {
        printf("가위(1) / 바위(2) / 보(3) / 종료(0)\n");
        printf("당신의 선택 : ");
        if (scanf_s("%d", &me) != 1) {
            printf("입력 오류. 다시 시도하세요.\n");
            while (getchar() != '\n'); // 입력 버퍼 비우기
            continue;
        }

        if (me == 0) {
            printf("게임을 종료합니다.\n");
            break;
        }

        com = (rand() % 3) + 1;
        printf("\n컴퓨터 : ");
        if (com == 1) printf("가위\n");
        else if (com == 2) printf("바위\n");
        else printf("보\n");

        printf("당 신 : ");
        if (me == 1) printf("가위\n");
        else if (me == 2) printf("바위\n");
        else printf("보\n");

        if (me == com) {
            printf("\n비겼다!\n\n");
        }
        else if ((me == 1 && com == 3) ||
            (me == 2 && com == 1) ||
            (me == 3 && com == 2)) {
            printf("\n당신이 이겼다!\n\n");
        }
        else {
            printf("\n당신이 졌다!\n\n");
        }
        printf("*** 가위 / 바위 / 보 게임 ***\n\n");

    } while (1);

    return 0;
}