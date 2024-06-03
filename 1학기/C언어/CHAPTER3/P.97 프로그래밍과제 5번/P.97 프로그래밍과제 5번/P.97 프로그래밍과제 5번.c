#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double USD, change, KRW;							//USD = 달러,   change = 환율,	 KRW = 원

	printf("USD? ");
	scanf("%lf", &USD);

	printf("원/달러 환율? ");
	scanf("%lf", &change);

	KRW = USD * change;
	printf("USD %.0f = KRW %.2f", USD, KRW);
}