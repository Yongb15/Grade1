#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// "��"�� ������ 3600���� ���������� �������� "��"�� �Ǵ°Ű� "��"�� s������ 3600 �� ���� ������ 60�� �ѵ� ������ �������� ������
// "��"�� 3750�� 60���� ������ ���� ������ ���� ���ϱ� 60�� �� �� ���� ������ ���� "��"�� �ȴ�.
int main()
{
	int hour, minutes, second, s;

	printf("��� �ð�(��)? ");
	scanf("%d", &s);

	hour = s / 3600;
	minutes = s % 3600 / 60;
	second = s % 60;
	

	printf("��� �ð��� %d�ð� %d�� %d�� �Դϴ�.", hour, minutes, second);
}