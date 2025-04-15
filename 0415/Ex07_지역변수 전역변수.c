#include <stdio.h>
#pragma warning (disable:4996)

int glo = 10;
double pi = 3.14;


void fun(char ch) {
	static int rrr = 55;
	double d = 1.23;
}

int main() {

	int a = 3;
	{
		int b = 10;
		{
			int c = -2;
			int d = 55;
			static int sta = 99;
		}
		char c = 'A';
		fum(c);
	}
	double x = 6.2;

	return 0;
}