#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int year;
	int month;
	int date;

	printf("��? ");
	scanf("%d", &year);
	printf("��? ");
	scanf("%d", &month);
	printf("��? ");
	scanf("%d", &date);
	
	printf("�Է��� ��¥�� %d�� %d�� %d�� �Դϴ�.", year, month, date);
}