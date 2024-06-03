#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no, d, time, sal, tax, money, tm, ot;
	double tr;

	printf("사원번호와 등급, 근무시간을 입력하시오. ");
	scanf("%d %d %d", &no, &d, &time);

	if (d == 1)
		tm = 10000;
	else if (d == 2)
		tm = 7000;
	else
		tm = 5000;

	if (time > 40)
		ot = time - 40;
	ot = 0;

	sal = (time * tm) + (ot * tm * 0.5);

	if (sal >= 300000)
		tr = 0.13;

	if (sal < 300000 && sal >= 200000)
		tr = 0.11;

	if (sal < 200000)
		tr = 0.08;

	tax = sal * tr;
	money = sal - tax;

	printf("사원번호 %d와 총급여 %d원 세금 %d원 실지급액 %d원 입니다.", no, sal, tax, money);
}
