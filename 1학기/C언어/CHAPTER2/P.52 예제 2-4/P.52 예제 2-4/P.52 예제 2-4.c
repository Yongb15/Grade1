#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int age;

	float height;

	float weight;


	printf("����, Ű, �����Ը� �Է����ּ���: ");

	scanf("%d %f %f", &age, &height, &weight);


	printf("����  : %5d\n", age);

	printf("Ű    : %4.1f\n", height);

	printf("������: %4.1f\n", weight);
}