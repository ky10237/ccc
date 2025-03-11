#include <stdio.h>
#pragma warning(disable:4996)
int main()
{

    //2문제. A상점의 빅 세일 기간의 모든 물건을 25%할인 하고 배송비 별도로 추가하시오.

    int shipping_fee = 3500;
    int pest, gift, price;


    printf("주문하실 물건의 이름을 입력해주세요. \n농약이 있습니다.\n배송비(3,500원) 별도\n");
    scanf("%d", &pest);

    price = pest * 0.75;
    gift = shipping_fee + price;


    printf("배송비 포함 상품의 가격은 %d 입니다.", gift);

	return 0;
}