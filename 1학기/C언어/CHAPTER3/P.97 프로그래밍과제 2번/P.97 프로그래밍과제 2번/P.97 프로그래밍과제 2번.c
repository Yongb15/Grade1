#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int width, length, value, value2;

	printf("������ ����? ");
	scanf("%d", &width);
	printf("������ ����? ");
	scanf("%d", &length);

	value = width * length;
	printf("���簢���� ����: %d\n", value);

	value2 = width * 2 + length * 2;
	printf("���簢���� �ѷ�: %d", value2);
}