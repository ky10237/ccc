#include <stdio.h>
#pragma warning (disable: 4996)
int main()
{

	double n1, n2, n3;
	char c1, is;

	while (1)
	{
		printf("ù ��° ��: ");
		scanf("%lf", &n1);
		while (getchar() != '\n');

		printf("�� ��° ��: ");
		scanf("%lf", &n2);
		while (getchar() != '\n');

		printf("������: ");
		scanf("%c", &c1);
		while (getchar() != '\n');


		if (c1 == '+')
		{
			n3 = n1 + n2;
			printf("%lf %c %lf = %lf", n1, c1, n2, n3);
			break;
		}
		if (c1 == '-')
		{
			n3 = n1 - n2;
			printf("%lf %c %lf = %lf", n1, c1, n2, n3);
			break;
		}
		if (c1 == '*')
		{
			n3 = n1 * n2;
			printf("%lf %c %lf = %lf", n1, c1, n2, n3);
			break;
		}
		if (c1 == '/')
		{
			n3 = n1 / n2;
			printf("%lf %c %lf = %lf", n1, c1, n2, n3);
			break;
		}
		while (getchar() != '\n');

		is = getchar();
		if (is == 'E' || is == 'e')
		{
			printf("��");
			break; 
		}

	}


	return 0;
}