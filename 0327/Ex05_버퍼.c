#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	char c1, c2, c3;

	printf("문자 입력1: ");
	c1 = getchar();

	//버퍼의 남은 내용을 모두 가져옴
	/*while (1)
	{
		char temp = getchar();
		if (temp == '\n')
		{
			break;
		}
	}*/

	/*while (1)
	{
		if (getchar() == '\n')
		{
			break;
		}
	}*/

	while (getchar() != '\n'); //버퍼에서 가져온 한글자가 \n가 아니라면 반복


	printf("문자 입력2: ");
	c2 = getchar();

	while (1)
	{
		char temp = getchar();
		if (temp == '\n')
		{
			break;
		}
	}

	printf("문자 입력3: ");
	c3 = getchar();

	printf("\n\n *결과*\n");
	printf("문자: %c => 아스키 코드: %d\n", c1, c1);
	printf("문자: %c => 아스키 코드: %d\n", c2, c2);
	printf("문자: %c => 아스키 코드: %d\n", c3, c3);



	return 0;
}