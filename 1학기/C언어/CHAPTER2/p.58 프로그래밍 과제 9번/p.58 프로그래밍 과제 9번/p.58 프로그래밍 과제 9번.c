#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;

	printf("8������ �Է��ϸ� 012, 16������ �Է��ϸ� 0x12ó�� �Է��ϼ���.\n");
	printf("����? ");
	scanf_s("%i", &a);

	printf(" 8���� : 0%o\n", a);
	printf("10���� : %d\n", a);
	printf("16���� : 0*%x", a);
}