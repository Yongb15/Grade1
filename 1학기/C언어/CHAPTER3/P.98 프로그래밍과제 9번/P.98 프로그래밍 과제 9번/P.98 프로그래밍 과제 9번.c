#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define m2 0.3025

int main()
{
	double m, p;

	printf("����Ʈ�� ����(��������) ? ");
	scanf("%lf", &m);

	p = m * m2;
	printf("%.2f �������� = %.2f ��", m, p);
}