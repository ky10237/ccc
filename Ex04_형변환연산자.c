#include <stdio.h>
#pragma warning (disable:4996)
int main() {

	int a = 10, b = 3;
	double result, d=3.54;

	//����ȯ(casting): �Ͻ������� �ڷ����� ��ȯ(������ ��ȯx)
	result = (double)a / b;
	printf("result=%f\n", result);


	printf("������=%d\n", (int)d); //(int)�� ����ȯ �ϸ� �Ҽ����� �߷�����
	printf("�Ҽ���=%f\n", d- (int)d);
	return 0;
}