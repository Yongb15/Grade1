#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double num1, num2;										// double�� �Ǽ� 2�� ����, scanf_s�� %lf ���
	printf("�Ǽ� 2�� ? ");
	scanf_s("%lf %lf", &num1, &num2);
	printf("%lf + %lf = %lf\n", num1, num2, num1 + num2);
	printf("%lf - %lf = %lf", num1, num2, num1 - num2);
}