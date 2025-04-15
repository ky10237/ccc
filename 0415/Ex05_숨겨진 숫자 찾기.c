#include<stdio.h> 
#include <stdlib.h> 
#include <time.h>
#pragma warning(disable:4996)

#define nums_size 10 

// �Լ� ����: �迭�� 1���� 10������ ���ڸ� ä��� �Լ�
void numbering(int* pNums);

// �Լ� ����: �迭���� ������ ���ڸ� �����, ������ ������ ���� ��ȯ�ϴ� �Լ�
int hideNumber(int* pNums);

int main() {

	int nums[nums_size]; // 10���� ������ �迭 ����

	int hidden = hideNumber(nums); // hideNumber �Լ� ȣ���Ͽ� ������ ������ ���� hidden ������ ����

	printf("���� ���߱�\n"); // ���� ���� �޽��� ���
	printf("���� ���ڴ�? "); // ����ڿ��� ������ ���ڸ� �Է��ϵ��� ��û
	int guess; // ������� �Է°��� ������ ���� ����
	scanf("%d", &guess); // ����ڷκ��� ���� �Է� �ޱ�

	// ������� �Է°��� ������ ���ڸ� ���Ͽ� ����� ���
	if (guess == hidden)
		printf("����\n"); // ������ ��� "����" ���
	else
		printf("����, ������ %d��\n", hidden); // ������ ��� "����, ������ [������ ����]��" ���
	return 0; // ���α׷� ����
}

// �Լ� ����: �迭�� 1���� 10������ ���ڸ� ä��� �Լ�
void numbering(int* pNums)
{
	for (int i = 0; i < nums_size; i++) { // �迭�� ��� ��ҿ� ���� �ݺ�
		pNums[i] = i + 1; // �迭�� i��° ��ҿ� i+1 ���� ���� (1���� 10���� ����)
	}
}

// �Լ� ����: �迭���� ������ ���ڸ� �����, ������ ������ ���� ��ȯ�ϴ� �Լ�
int hideNumber(int* pNums)
{
	srand((unsigned int)time(NULL)); // ���� ������ �ʱ�ȭ (���� �ð��� ��������)
	int hideIdx = rand() % 10; // 0���� 9 ������ ������ �ε��� ����
	pNums[hideIdx] = -1; // ������ �ε����� �ش��ϴ� �迭�� ��Ҹ� -1�� ���� (����)

	return hideIdx + 1; // ������ ������ �� (�ε��� + 1) ��ȯ
}