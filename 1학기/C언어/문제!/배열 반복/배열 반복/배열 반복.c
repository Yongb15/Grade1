#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[7];
	int sum = 0;
	double ave = 0;

	printf("���� 7���� �Է��Ͻÿ�. ");

	for (int i = 0; i < 7; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	ave = sum / 7.0;
	printf("���� %d�̰� ����� %f�Դϴ�.", sum, ave);

}