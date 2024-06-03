#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int age;

	float height;

	float weight;


	printf("나이, 키, 몸무게를 입력해주세요: ");

	scanf("%d %f %f", &age, &height, &weight);


	printf("나이  : %5d\n", age);

	printf("키    : %4.1f\n", height);

	printf("몸무게: %4.1f\n", weight);
}