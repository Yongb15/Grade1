#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int g, h, hi, hg;

	printf("��ǰ�� ����? ");
	scanf("%d", &g);
	printf("������(%%)? ");
	scanf("%d", &h);

	hi = g * (double)h / 100;
	(int)hg = g - hi;

	printf("���ΰ�: %d�� (%d�� ����)", hg, hi);

}