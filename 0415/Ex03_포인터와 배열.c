#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)
#define NUM_MAX_SIZE 100

void randomize(int* pNums, int size);
void displayArray(int* pNums, int size);
int getArraySum(int* PNums, int size);

int main() {

	int nums[NUM_MAX_SIZE];

	randomize(nums, NUM_MAX_SIZE);
	displayArray(nums,NUM_MAX_SIZE);
	getArraySum(nums, NUM_MAX_SIZE);
	
	return 0;
}

void randomize(int* pNums, int size)
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < size; i++) {
		pNums[i] = rand() % 900 + 100;
	}

}

void displayArray(int* pNums, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%5d", pNums[i]);
	
	}
	puts("");
}

int getArraySum(int* PNums, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += PNums[i];

	return sum;
}
