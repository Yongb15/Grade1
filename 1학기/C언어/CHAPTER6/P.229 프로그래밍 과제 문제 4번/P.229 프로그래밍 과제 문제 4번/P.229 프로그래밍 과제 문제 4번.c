#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int i(int x, int y);

int main()
{
	int g, sum, h;

	printf("������(%%)? ");
	scanf("%d", &h);

	while (1) {
		printf("��ǰ�� ����? ");
		scanf("%d", &g);

		if (g == 0)
			break;
		
		sum = i(g, h);

		printf("���ΰ�: %d\n", sum);
	}
	printf("���α׷��� �����Ͽ����ϴ�.");
}

int i(int x, int y)
{
	int sum;

	sum = x - ((int)x * (y / 100.0));

	return sum;
}