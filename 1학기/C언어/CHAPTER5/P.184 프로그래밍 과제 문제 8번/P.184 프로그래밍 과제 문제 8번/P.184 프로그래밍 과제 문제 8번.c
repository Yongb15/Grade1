#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char i;

	for (i = 32; i <= 126; i++) {
		printf("%c", i);
		if ((i - 31) % 24 == 0) {
			printf("\n");
		}
	}
}