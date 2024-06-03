#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;

	printf("Input two integers: ");
	scanf("%d %d", &x, &y);

	printf("+%d = %d\n", x, +x);
	printf("-%d = %d\n", y, -y);
	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x * y);
	printf("%d / %d = %d\n", x, y, x / y);
	printf("%d %% %d = %d\n", x, y, x % y);
}