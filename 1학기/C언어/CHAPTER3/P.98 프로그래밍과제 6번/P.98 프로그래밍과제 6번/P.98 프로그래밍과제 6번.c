#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double KRW, change, USD;							//change = ȯ��

	printf("KRW? ");
	scanf("%lf", &KRW);

	printf("��/�޷� ȯ��? ");
	scanf("%lf", &change);

	USD = KRW / change;
	printf("KRW %.0f = USD %.2f", KRW, USD);
}