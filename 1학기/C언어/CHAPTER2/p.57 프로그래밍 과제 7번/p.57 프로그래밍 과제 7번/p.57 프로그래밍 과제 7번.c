#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double num1, num2;										// double는 실수 2개 지정, scanf_s와 %lf 사용
	printf("실수 2개 ? ");
	scanf_s("%lf %lf", &num1, &num2);
	printf("%lf + %lf = %lf\n", num1, num2, num1 + num2);
	printf("%lf - %lf = %lf", num1, num2, num1 - num2);
}