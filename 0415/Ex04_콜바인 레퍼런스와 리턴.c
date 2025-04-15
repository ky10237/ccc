#include <stdio.h>
#pragma warning (disable:4996)

void getSumReference(int p1, int p2, int* psum);
int getreturn(int r1, int r2);


int main() {

	int n1, n2;
	printf("두 수 입력: ");
	scanf("%d %d", &n1, &n2);

	int sum;
	getSumReference(n1, n2, &sum);

	printf("두 수의 합=%d\n", sum);

	sum = getreturn(n1,n2);
	printf("두 수의 합=%d rr\n", sum);
	return 0;
}

void getSumReference(int p1, int p2, int* psum)
{
	*psum = p1 + p2;
}

int getreturn(int r1, int r2)
{
	return  r1 + r2;
}
