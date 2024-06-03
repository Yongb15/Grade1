#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int i(int x, int y);

int main()
{
	int g, sum, h;

	printf("할인율(%%)? ");
	scanf("%d", &h);

	while (1) {
		printf("제품의 가격? ");
		scanf("%d", &g);

		if (g == 0)
			break;
		
		sum = i(g, h);

		printf("할인가: %d\n", sum);
	}
	printf("프로그램을 종료하였습니다.");
}

int i(int x, int y)
{
	int sum;

	sum = x - ((int)x * (y / 100.0));

	return sum;
}