#include <stdio.h>
#pragma warning (disable:4996)

void calc_area(double top, double bottom, double height, double *area);


int main() {
//��ٸ����� ����, �غ�, ���̸� �Է¹޾� �������� ���ϴ� �Լ��� 
//call by reslkfjlsdjf����� �̿��ؼ� �ذ��Ͻð�.
//���ϰ� ���� voidŸ��

	double to, bott, heig, ar;

	printf("��ٸ����� ����, �غ�, ���̸� �Է��ϼ���: ");
	scanf("%lf %lf %lf", &to, &bott, &heig);
	
	calc_area(to, bott, heig, &ar);

	printf("��ٸ����� ���̴�: %.2f\n", ar);

	return 0;
}

void calc_area(double top, double bottom, double height, double* area)
{
	 *area = (top + bottom) * height / 2;
}
