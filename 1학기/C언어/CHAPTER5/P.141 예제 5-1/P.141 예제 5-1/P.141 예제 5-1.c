#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;

	printf("����? ");
	scanf("%d", &score);

	if (score < 70)
	{
		printf("���!!!\n");
		printf("��ô� 90�� �̻��̾�� ����Դϴ�.\n");
	}
}