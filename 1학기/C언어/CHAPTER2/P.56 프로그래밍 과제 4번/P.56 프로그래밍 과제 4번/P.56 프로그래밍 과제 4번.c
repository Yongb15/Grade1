#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int hour;
	int minute;
	int second;

	printf("시? ");
	scanf("%d", &hour);
	printf("분? ");
	scanf("%d", &minute);
	printf("초? ");
	scanf("%d", &second);
	printf("입력한 시간은 %02d:%02d:%02d입니다.", hour, minute, second);
}