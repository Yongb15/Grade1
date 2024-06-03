#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double KRW, change, USD;							//change = 환율

	printf("KRW? ");
	scanf("%lf", &KRW);

	printf("원/달러 환율? ");
	scanf("%lf", &change);

	USD = KRW / change;
	printf("KRW %.0f = USD %.2f", KRW, USD);
}