#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n1, n2, n3, n4 = 0, n5;

	srand(time(NULL));
	for (int i = 1; i <= 10; i++)
	{
		n1 = rand() % 10;
		n2 = rand() % 10;

		printf("%2d. %d + %d = ", i, n1, n2);
		if (scanf_s("%d", &n3) != 1) {
			printf("�Է� ������ �߻��߽��ϴ�.\n");
			return 1;
		}
		while (getchar() != '\n');
		
		if (n1 + n2 == n3)
		{
			n4++;
		}

	}
	n5 = n4 * 10;
	printf("�� 10���� �� ������ %d�� �Դϴ�.\n", n4);
	printf("����� ������ %d���Դϴ�.\n", n5);

	return 0;
}
