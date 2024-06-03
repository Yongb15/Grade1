#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;

	printf("점수? ");
	scanf("%d", &score);

	if (score < 70)
	{
		printf("재시!!!\n");
		printf("재시는 90점 이상이어야 통과입니다.\n");
	}
}