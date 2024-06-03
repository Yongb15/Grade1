#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double kg, m, j;

	printf("질량(kg)? ");
	scanf("%lf", &kg);
	printf("높이(m)? ");
	scanf("%lf", &m);

	j = 9.8 * kg * m;
	printf("위치에너지: %.2f J", j);
}