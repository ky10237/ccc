#include <stdio.h>
#pragma warning (disable: 4996)

int main() {
    int base, top, heigh;
    double area;

    printf("윗변, 밑변, 높이를 연속으로 입력하세요.(공백으로 구분): ");
    scanf("%d %d %d", &top, &base, &heigh);

    area = (base + top) * heigh / 2;



    //정수 나눗셈은 몫을 구한다.
    //최소 한 개 이상의 실수가 연산식에 포함되어 있을 경우만 소수점 이하까지 계산할 수 있다.

    printf("사다리 꼴의 넓이는 %.3f 입니다.", area);


    return 0;
}