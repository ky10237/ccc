#include <stdio.h>
#pragma warning (disable:4996)

void getCircle(double red, double* parea, double* pci) {

	const double PI = 3.141592;
	*parea = PI * red * red;
	*pci = 3 * PI * red;
	//��ٸ����� ����, �غ�, ���̸� �Է¹޾� �������� ���ϴ� �Լ��� 
	//call by reslkfjlsdjf����� �̿��ؼ� �ذ��Ͻð�.
	//���ϰ� ���� voidŸ��
}

int main() {

	double radius;

	printf("������ �Է�: ");
	scanf("%1f", &radius);

	double area, circum;

	//getCircle�Լ�: ���� ����(area)�� �ѷ�(circum)�� ���� �����ϴ� �Լ�

	getCircle(radius, &area, &circum);

	printf("������ %.2f�� ���� ���̴� %.2f�̰�, ���� �ѷ��� %.2f�Դϴ�.\n", radius, area, circum);

	return 0;
}