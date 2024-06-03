#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, sum, cnt;

	scanf("%d", &n);

	sum = 0;
	cnt = 1;

	while (cnt < n)
	{
		sum += cnt;
		cnt++;

		printf("[%d] [%d]", sum, cnt);
	}
	printf("гую╨? %d", sum);
}