#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

#define student_num 30

void shuffle(int arr[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1); // 랜덤 인덱스 생성
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {

    int students[student_num]; // 학생 번호를 저장할 배열

    // 학생 번호 초기화 (1번부터 student_num번까지)
    for (int i = 0; i < student_num; i++) {
        students[i] = i + 1;
    }

    srand(time(NULL)); // 랜덤 시드 초기화
    shuffle(students, student_num); // 배열 섞기

    printf("랜덤 짝궁 목록:\n");
    for (int i = 0; i < student_num; i += 2) {
        if (i + 1 < student_num) {
            printf("짝궁: %d - %d\n", students[i], students[i + 1]);
        }
    }

	return 0;
}