#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 10
#include <math.h>
int main()
{
	int h, g;
	int arr[size] = { 0 };

	printf("첫 번째 항? ");
	scanf("%d", &h);
	printf("공비? ");
	scanf("%d", &g);

	printf("등비수열: ");

	for (int i = 0; i < size; i++)
	{
		arr[i] = h * pow(g,i);
		printf("%d ", arr[i]);
	}
}