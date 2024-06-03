#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double dollar;			
	printf("달러? ");
	scanf_s("%lf", &dollar);		// 정수, 실수 입력 시 scanf와 같은 방법으로 사용한다
	printf("%0.2lf는 %d원입니다.", dollar, (int)(dollar * 1000));		//lf는 long doube
}