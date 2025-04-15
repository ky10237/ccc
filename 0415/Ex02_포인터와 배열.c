#include<stdio.h>
#pragma warning(disable:4996)

void display(int *ptr);
void displayFloat(double* ptr);
void displaychar(char* ptr);

int main()
{
	int arr[5] = { 10,20,30,40,50 };
	double d[3] = { 1.1,2.2,3.3 };
	char c[4] = { 'a','b','c','d' };

	

	display(arr);
	displayFloat(d);
	displaychar(c);
	return 0;
}

void display(int* ptr)
{
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d", *(ptr + i));
	}
}

void displayFloat(double* ptr)
{
	for (int i = 0; i < 3; i++) {
		printf("%f", ptr[i]);
		puts("");
	}
}

void displaychar(char* ptr)
{
	int i;
	for (i = 0; i < 4; i++) {
		printf("%c", ptr[i]);
		puts("");
	}
}
