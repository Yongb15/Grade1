#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum, kwh, hwh, g;

	sum = 0;

	printf("�� ��뷮 (kWh)? ");
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

	printf("���� ��� �հ�: %d\n", sum);
	printf(" - �⺻���: %d\n", g);
	printf(" - ���·����: %d", hwh);
}