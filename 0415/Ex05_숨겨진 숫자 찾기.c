#include<stdio.h> 
#include <stdlib.h> 
#include <time.h>
#pragma warning(disable:4996)

#define nums_size 10 

// 함수 선언: 배열에 1부터 10까지의 숫자를 채우는 함수
void numbering(int* pNums);

// 함수 선언: 배열에서 임의의 숫자를 숨기고, 숨겨진 숫자의 값을 반환하는 함수
int hideNumber(int* pNums);

int main() {

	int nums[nums_size]; // 10개의 정수형 배열 선언

	int hidden = hideNumber(nums); // hideNumber 함수 호출하여 숨겨진 숫자의 값을 hidden 변수에 저장

	printf("숫자 맞추기\n"); // 게임 시작 메시지 출력
	printf("빠진 숫자는? "); // 사용자에게 숨겨진 숫자를 입력하도록 요청
	int guess; // 사용자의 입력값을 저장할 변수 선언
	scanf("%d", &guess); // 사용자로부터 정수 입력 받기

	// 사용자의 입력값과 숨겨진 숫자를 비교하여 결과를 출력
	if (guess == hidden)
		printf("정답\n"); // 정답인 경우 "정답" 출력
	else
		printf("오답, 정답은 %d임\n", hidden); // 오답인 경우 "오답, 정답은 [숨겨진 숫자]임" 출력
	return 0; // 프로그램 종료
}

// 함수 정의: 배열에 1부터 10까지의 숫자를 채우는 함수
void numbering(int* pNums)
{
	for (int i = 0; i < nums_size; i++) { // 배열의 모든 요소에 대해 반복
		pNums[i] = i + 1; // 배열의 i번째 요소에 i+1 값을 저장 (1부터 10까지 저장)
	}
}

// 함수 정의: 배열에서 임의의 숫자를 숨기고, 숨겨진 숫자의 값을 반환하는 함수
int hideNumber(int* pNums)
{
	srand((unsigned int)time(NULL)); // 난수 생성기 초기화 (현재 시간을 기준으로)
	int hideIdx = rand() % 10; // 0부터 9 사이의 임의의 인덱스 생성
	pNums[hideIdx] = -1; // 생성된 인덱스에 해당하는 배열의 요소를 -1로 변경 (숨김)

	return hideIdx + 1; // 숨겨진 숫자의 값 (인덱스 + 1) 반환
}