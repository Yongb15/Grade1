#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char size;

	printf("옷사이즈(S,M,L)? ");
	scanf("%c", &size);
	printf("%c 사이즈를 선택했습니다.", size);
}