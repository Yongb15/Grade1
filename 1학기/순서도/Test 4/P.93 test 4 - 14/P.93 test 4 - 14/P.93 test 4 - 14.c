#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no, price, age, dis, buy;
	double disco;

	printf("회원번호와 정가, 나이를 입력하시오. ");
	scanf("%d %d %d", &no, &price, &age);

	if (age < 18 || age >= 70)
		disco = 0.20;
	if (age >= 60 && age < 70)
		disco = 0.15;
	if (age >= 18 && age < 60)
		disco = 0;

	dis = price * disco;
	buy = price - dis;

	printf("회원번호는 %d번이고 할인액 %d원 실구입가 %d원 입니다.", no, dis, buy);
}