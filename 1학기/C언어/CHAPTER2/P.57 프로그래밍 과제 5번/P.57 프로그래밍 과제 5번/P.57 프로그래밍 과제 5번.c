#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double dollar;			
	printf("�޷�? ");
	scanf_s("%lf", &dollar);		// ����, �Ǽ� �Է� �� scanf�� ���� ������� ����Ѵ�
	printf("%0.2lf�� %d���Դϴ�.", dollar, (int)(dollar * 1000));		//lf�� long doube
}