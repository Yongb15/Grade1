#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no, price, age, dis, buy;
	double disco;

	printf("ȸ����ȣ�� ����, ���̸� �Է��Ͻÿ�. ");
	scanf("%d %d %d", &no, &price, &age);

	if (age < 18 || age >= 70)
		disco = 0.20;
	if (age >= 60 && age < 70)
		disco = 0.15;
	if (age >= 18 && age < 60)
		disco = 0;

	dis = price * disco;
	buy = price - dis;

	printf("ȸ����ȣ�� %d���̰� ���ξ� %d�� �Ǳ��԰� %d�� �Դϴ�.", no, dis, buy);
}