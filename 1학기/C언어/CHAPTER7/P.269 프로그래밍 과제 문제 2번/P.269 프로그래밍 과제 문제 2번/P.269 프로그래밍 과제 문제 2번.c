#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 10
#include <math.h>
int main()
{
	int h, g;
	int arr[size] = { 0 };

	printf("ù ��° ��? ");
	scanf("%d", &h);
	printf("����? ");
	scanf("%d", &g);

	printf("������: ");

	for (int i = 0; i < size; i++)
	{
		arr[i] = h * pow(g,i);
		printf("%d ", arr[i]);
	}
}