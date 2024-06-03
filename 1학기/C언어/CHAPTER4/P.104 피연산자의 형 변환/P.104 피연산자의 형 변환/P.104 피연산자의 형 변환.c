#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int income = 3000000;
	short w = 2000, h = 4000, num = 123;

	printf("tax = f\n", 0.35 * income);
	printf("sizeof(w * h) = %d\n", sizeof(w * h));
	printf("sizeof(-num) = %d\n", sizeof(-num));
}