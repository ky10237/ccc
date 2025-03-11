#include <stdio.h>

int main() {
    int base = 3, top = 4, height = 5;
    double area;
    area = (base + top) * height / 2; 
    
    //정수 나눗셈은 몫을 구한다.
    //최소 한 개 이상의 실수가 연산식에 포함되어 있을 경우만 소수점 이하까지 계산할 수 있다.

    printf("사다리 꼴의 넓이는 %.3f 입니다.", area);


    return 0;
}