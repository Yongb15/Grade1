#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double USD, change, KRW;							//USD = �޷�,   change = ȯ��,	 KRW = ��

	printf("USD? ");
	scanf("%lf", &USD);

	printf("��/�޷� ȯ��? ");
	scanf("%lf", &change);

	KRW = USD * change;
	printf("USD %.0f = KRW %.2f", USD, KRW);
}