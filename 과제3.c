#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int num;

    printf("���� �Է��ϼ���: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 4 == 0) {
        printf("%d��(��) 3�� ��� �̸鼭, 4�� ��� �Դϴ�.\n", num);
    }
    else if (num % 3 == 0) 
    {
        printf("%d��(��) 3�� ��� �Դϴ�.\n", num);
    }
    else if (num % 4 == 0) 
    {
        printf("%d��(��) 4�� ��� �Դϴ�.\n", num);
    }
    else 
    {
        printf("%d��(��) 3�� ����� 4�� ����� �ƴմϴ�.\n", num);
            }
       
	return 0;
}