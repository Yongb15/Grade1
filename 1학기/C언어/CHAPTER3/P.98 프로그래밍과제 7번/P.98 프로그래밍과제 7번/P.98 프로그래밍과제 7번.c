#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define m 0.9144

int main()
{
	double yd, value;

	printf("±Ê¿Ã(yd)? ");
	scanf("%lf", &yd);

	value = yd * m;
	printf("%.0f yd = %f m", yd, value);
}