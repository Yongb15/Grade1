#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double kg, m, j;

	printf("����(kg)? ");
	scanf("%lf", &kg);
	printf("����(m)? ");
	scanf("%lf", &m);

	j = 9.8 * kg * m;
	printf("��ġ������: %.2f J", j);
}