#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

#define student_num 30

void shuffle(int arr[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1); // ���� �ε��� ����
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {

    int students[student_num]; // �л� ��ȣ�� ������ �迭

    // �л� ��ȣ �ʱ�ȭ (1������ student_num������)
    for (int i = 0; i < student_num; i++) {
        students[i] = i + 1;
    }

    srand(time(NULL)); // ���� �õ� �ʱ�ȭ
    shuffle(students, student_num); // �迭 ����

    printf("���� ¦�� ���:\n");
    for (int i = 0; i < student_num; i += 2) {
        if (i + 1 < student_num) {
            printf("¦��: %d - %d\n", students[i], students[i + 1]);
        }
    }

	return 0;
}