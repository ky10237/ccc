#include <stdio.h>
#pragma warning <disable:4996>

void toUpper(char* p);
char getUpper(char C);


void toUpper(char* p) {
	if (*p >= 'a' && *p <= 'Z') {
		*p -= 32;
	}
}

char getUpper(char C)
{	
	if (C >= 'a' && C <= 'z') //�ҹ����� ���
		C -= 32;			//�빮�ڷ� ��ȯ
	return C;
}

int main() {

	char ch;
	printf("�����Է�: ");
	ch = getchar();
	//toUpper(ch);
	
	ch = getUpper(ch);

	printf("����� %c�Դϴ�.\n", ch);
	return 0;
}