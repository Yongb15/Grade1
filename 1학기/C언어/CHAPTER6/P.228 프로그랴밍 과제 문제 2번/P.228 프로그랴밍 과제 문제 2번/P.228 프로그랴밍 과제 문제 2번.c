#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_area(int x, int y);

int main()
{
	int x, y, dul;

	printf("����? ");
	scanf("%d", &x);
	printf("����? ");
	scanf("%d", &y);

	dul = get_area(x, y);

	printf("���簢���� �ѷ�: %d", dul);
}

int get_area(int x, int y)
{
	int dul;

	dul = (x + x) + (y + y);

	return dul;
}