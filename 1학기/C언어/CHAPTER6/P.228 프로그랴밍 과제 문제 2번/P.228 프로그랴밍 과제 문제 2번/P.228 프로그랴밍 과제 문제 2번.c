#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_area(int x, int y);

int main()
{
	int x, y, dul;

	printf("가로? ");
	scanf("%d", &x);
	printf("세로? ");
	scanf("%d", &y);

	dul = get_area(x, y);

	printf("직사각형의 둘레: %d", dul);
}

int get_area(int x, int y)
{
	int dul;

	dul = (x + x) + (y + y);

	return dul;
}