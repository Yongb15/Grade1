#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int width, length, value, value2;

	printf("가로의 길이? ");
	scanf("%d", &width);
	printf("세로의 길이? ");
	scanf("%d", &length);

	value = width * length;
	printf("직사각형의 넓이: %d\n", value);

	value2 = width * 2 + length * 2;
	printf("직사각형의 둘레: %d", value2);
}