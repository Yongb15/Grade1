#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[7];
	int sum = 0;
	double ave = 0;

	printf("정수 7개를 입력하시오. ");

	for (int i = 0; i < 7; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	ave = sum / 7.0;
	printf("합은 %d이고 평균은 %f입니다.", sum, ave);

}