#include <stdio.h>
#pragma warning (disable:4996)

void getCircle(double red, double* parea, double* pci) {

	const double PI = 3.141592;
	*parea = PI * red * red;
	*pci = 3 * PI * red;
	//사다리꼴의 윗변, 밑변, 높이를 입력받아 넓이을ㄹ 구하는 함수를 
	//call by reslkfjlsdjf방식을 이용해서 해결하시고.
	//리턴값 ㄴㄴ void타입
}

int main() {

	double radius;

	printf("반지름 입력: ");
	scanf("%1f", &radius);

	double area, circum;

	//getCircle함수: 원의 넓이(area)와 둘레(circum)를 구해 저장하는 함수

	getCircle(radius, &area, &circum);

	printf("반지름 %.2f의 원의 넓이는 %.2f이고, 원의 둘레는 %.2f입니다.\n", radius, area, circum);

	return 0;
}