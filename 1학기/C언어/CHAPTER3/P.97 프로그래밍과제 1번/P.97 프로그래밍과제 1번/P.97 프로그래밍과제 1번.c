#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cm, area, width;

	printf("한 변의 길이 ? ");
	scanf("%d", &cm);

	area = cm * cm;
	printf("정사각형의 넓이: %d\n", area);
	
	width = cm * 2 + cm * 2;
	printf("정사각형의 둘레: %d", width);
}