#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cm, area, width;

	printf("�� ���� ���� ? ");
	scanf("%d", &cm);

	area = cm * cm;
	printf("���簢���� ����: %d\n", area);
	
	width = cm * 2 + cm * 2;
	printf("���簢���� �ѷ�: %d", width);
}