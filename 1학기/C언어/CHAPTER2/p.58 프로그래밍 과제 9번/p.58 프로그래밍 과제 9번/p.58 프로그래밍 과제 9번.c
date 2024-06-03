#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;

	printf("8진수로 입력하면 012, 16진수로 입력하면 0x12처럼 입력하세요.\n");
	printf("정수? ");
	scanf_s("%i", &a);

	printf(" 8진수 : 0%o\n", a);
	printf("10진수 : %d\n", a);
	printf("16진수 : 0*%x", a);
}