#include <stdio.h>

int main()
{
	int max, min;
	int arr[] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

	max = arr[0];
	min = arr[0];
	
	printf("배열: ");

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("최대값: %d\n", max);
	printf("최소값: %d\n", min);
}