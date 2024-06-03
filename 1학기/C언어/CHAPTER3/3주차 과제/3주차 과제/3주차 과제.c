#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int stnum;
	int birth;

	printf("학번 출생년도 입력:");
	scanf("%d %d", &stnum, &birth);
	printf("학번:%d\n", stnum);
	printf("출생년도:%d", birth);
}