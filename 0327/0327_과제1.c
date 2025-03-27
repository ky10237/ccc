#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int me, com;

    srand(time(NULL));
    printf("*** ���� / ���� / �� ���� ***\n\n");

    do {
        printf("����(1) / ����(2) / ��(3) / ����(0)\n");
        printf("����� ���� : ");
        if (scanf_s("%d", &me) != 1) {
            printf("�Է� ����. �ٽ� �õ��ϼ���.\n");
            while (getchar() != '\n'); // �Է� ���� ����
            continue;
        }

        if (me == 0) {
            printf("������ �����մϴ�.\n");
            break;
        }

        com = (rand() % 3) + 1;
        printf("\n��ǻ�� : ");
        if (com == 1) printf("����\n");
        else if (com == 2) printf("����\n");
        else printf("��\n");

        printf("�� �� : ");
        if (me == 1) printf("����\n");
        else if (me == 2) printf("����\n");
        else printf("��\n");

        if (me == com) {
            printf("\n����!\n\n");
        }
        else if ((me == 1 && com == 3) ||
            (me == 2 && com == 1) ||
            (me == 3 && com == 2)) {
            printf("\n����� �̰��!\n\n");
        }
        else {
            printf("\n����� ����!\n\n");
        }
        printf("*** ���� / ���� / �� ���� ***\n\n");

    } while (1);

    return 0;
}