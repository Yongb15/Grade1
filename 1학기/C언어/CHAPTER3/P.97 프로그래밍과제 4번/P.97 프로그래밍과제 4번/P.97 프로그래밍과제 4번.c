#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double lb, height, area;            //lb = �غ�,  height = ����, area = ����

	printf("�غ��� ����? ");
	scanf("%lf %lf", &lb, &height);

	area = lb * height * 1/2;
	printf("�����ﰢ���� ���� : %.2f", area);
}