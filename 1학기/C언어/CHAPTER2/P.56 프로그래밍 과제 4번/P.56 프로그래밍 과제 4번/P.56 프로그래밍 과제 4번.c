#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int hour;
	int minute;
	int second;

	printf("��? ");
	scanf("%d", &hour);
	printf("��? ");
	scanf("%d", &minute);
	printf("��? ");
	scanf("%d", &second);
	printf("�Է��� �ð��� %02d:%02d:%02d�Դϴ�.", hour, minute, second);
}