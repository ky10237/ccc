#include <stdio.h>
#pragma warning(disable:4996)
int main()
{

    //2����. A������ �� ���� �Ⱓ�� ��� ������ 25%���� �ϰ� ��ۺ� ������ �߰��Ͻÿ�.

    int shipping_fee = 3500;
    int pest, gift, price;


    printf("�ֹ��Ͻ� ������ �̸��� �Է����ּ���. \n����� �ֽ��ϴ�.\n��ۺ�(3,500��) ����\n");
    scanf("%d", &pest);

    price = pest * 0.75;
    gift = shipping_fee + price;


    printf("��ۺ� ���� ��ǰ�� ������ %d �Դϴ�.", gift);

	return 0;
}