#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum, kwh, hwh, g;

	sum = 0;

	printf("월 사용량 (kWh)? ");
	scanf("%d", &kwh);

	if (kwh >= 300) {
		g = 5000;
		hwh = 300 * 100 + (kwh - 300) * 200;
		sum = g + hwh;
	}
	if (kwh < 300) {
		g = 1000;
		hwh = kwh * 100;
		sum = g + hwh;
	}

	printf("전기 요금 합계: %d\n", sum);
	printf(" - 기본요금: %d\n", g);
	printf(" - 전력량요금: %d", hwh);
}