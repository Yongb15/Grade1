#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1번 문제
/*
int main()
{
	int a = -10, b = -11;

	if (a > 0)							// -10 < 0 이므로 거짓
	{
		b = 1;
	}
	else if (a == 0)						// -10 == 0 이므로 거짓
	{
		b = 2;
	}
	else 							// 위에 조건들이 모두 거짓이므로 실행
	{
		b = 3;						// b에 3을 대입
	}
	printf("b : %d\n", b);
} */
// 2번 문제
/*
int main()
{
	int rank, m = 2;

	switch (m)							// m = 2
	{
	case 1:						// 거짓
		rank = 300;
	case 2:						// 참이지만 break가 없어서 case 3 실행 
		rank = 200;
	case 3:
		rank = 100;
		break;					// break를 만나 switch 종료		// rank에 100을 대입
	default:						// 종료 되었으므로 실행 x
		m = 10;
	}
	printf("rank : %d\n", rank);
} */
// 3번 문제
/*
void fruit(int n)
{
	printf("app\t");

	if (n == 2)
	{
		return;
		fruit(n + 1);
	}
}

void main(void)
{
	fruit(1);
} */
// 4번 문제
/*
int main()
{
	int ary[5];							// 연속된 공간에 5개의 공간을 만듬
	ary[0] = 3;						// 0번째 방에 3을 넣음
	ary[1] = 5;						// 1번째 방에 5를 넣음

	scanf("%d", &ary[3]); 					// 입력값 9
	printf("%d %d \n", ary[2], ary[3]);
} */
// 5번 문제
/*
int main()
{
	char str[3]; 						// 연속된 공간에 3개의 공간을 만듬, 초기화 X
	str[0] = 'O';						// 0번째 방에 'O' 으로 초기화
	str[1] = 'k';						// 1번째 방에 'k' 으로 초기화

	str[1] = '@';						// 다시 1번째 방에 '@' 을 대입
	str[2] = '\0';						// 2번째 방에 '\0' 으로 초기화

	printf("%s\n", str);						// %s는 문자열 출력, %s는 주소값을 받고, 그 주소값 안에 저장되어 있는 문자를 시작으로 \0(NULL)을 만날때 까지 실행
} */
// 6번 문제
/*
int main()
{
	char str1[80] = "cat";					// str1[0] : c, str1[1] : a, str1[2] : t로 초기화
	char str2[80];

	strcpy(str1, "tiger");					// str1에 tiger를 복사
	strcpy(str2, str1);						// str2에 str1을 복사

	printf("%s %s\n", str2, str1);
} */
// 7번 문제
/*
int main()
{
	int a;
	int* pa;
	pa = &a;
	a = 33;
	*pa = 88;

	printf("%d %d\n", *pa, a);
} */
// 8번 문제
int main()
{
	int a = 10;
	int b = 20;

	int* pa = &a;
	pa = &b;

	printf("%d", *pa);

	a = 33;

	printf("%d\n", *pa);
}