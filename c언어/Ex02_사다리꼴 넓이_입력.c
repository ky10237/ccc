#include <stdio.h>
#pragma warning (disable: 4996)

int main() {
    int base, top, heigh;
    double area;

    printf("����, �غ�, ���̸� �������� �Է��ϼ���.(�������� ����): ");
    scanf("%d %d %d", &top, &base, &heigh);

    area = (base + top) * heigh / 2;



    //���� �������� ���� ���Ѵ�.
    //�ּ� �� �� �̻��� �Ǽ��� ����Ŀ� ���ԵǾ� ���� ��츸 �Ҽ��� ���ϱ��� ����� �� �ִ�.

    printf("��ٸ� ���� ���̴� %.3f �Դϴ�.", area);


    return 0;
}