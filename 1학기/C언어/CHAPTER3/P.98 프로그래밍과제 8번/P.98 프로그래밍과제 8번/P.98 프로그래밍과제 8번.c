#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define in 2.54

int main()
{
	double ina, cm;

	printf("±Ê¿Ã(in)? ");
	scanf("%lf", &ina);

	cm = ina * in;
	printf("%.2f in = %.2f cm", ina, cm);
}