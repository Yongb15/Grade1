#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int year;
	int month;
	int date;

	printf("연? ");
	scanf("%d", &year);
	printf("월? ");
	scanf("%d", &month);
	printf("일? ");
	scanf("%d", &date);
	
	printf("입력한 날짜는 %d년 %d월 %d일 입니다.", year, month, date);
}