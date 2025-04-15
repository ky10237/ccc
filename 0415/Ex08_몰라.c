#include <stdio.h>
#pragma warning (disable:4996)

void calc_area(double top, double bottom, double height, double *area);


int main() {
//사다리꼴의 윗변, 밑변, 높이를 입력받아 넓이을ㄹ 구하는 함수를 
//call by reslkfjlsdjf방식을 이용해서 해결하시고.
//리턴값 ㄴㄴ void타입

	double to, bott, heig, ar;

	printf("사다리꼴의 윗변, 밑변, 높이를 입력하세요: ");
	scanf("%lf %lf %lf", &to, &bott, &heig);
	
	calc_area(to, bott, heig, &ar);

	printf("사다리꼴의 넓이는: %.2f\n", ar);

	return 0;
}

void calc_area(double top, double bottom, double height, double* area)
{
	 *area = (top + bottom) * height / 2;
}
