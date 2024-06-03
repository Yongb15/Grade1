#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define m2 0.3025

int main()
{
	double m, p;

	printf("아파트의 면적(제곱미터) ? ");
	scanf("%lf", &m);

	p = m * m2;
	printf("%.2f 제곱미터 = %.2f 평", m, p);
}