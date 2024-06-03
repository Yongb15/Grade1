#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int g, h, hi, hg;

	printf("제품의 가격? ");
	scanf("%d", &g);
	printf("할인율(%%)? ");
	scanf("%d", &h);

	hi = g * (double)h / 100;
	(int)hg = g - hi;

	printf("할인가: %d원 (%d원 할인)", hg, hi);

}