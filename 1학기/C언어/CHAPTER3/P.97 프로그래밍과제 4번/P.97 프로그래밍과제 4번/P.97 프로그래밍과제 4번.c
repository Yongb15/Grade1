#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double lb, height, area;            //lb = 밑변,  height = 높이, area = 넓이

	printf("밑변과 높이? ");
	scanf("%lf %lf", &lb, &height);

	area = lb * height * 1/2;
	printf("직각삼각형의 면적 : %.2f", area);
}