#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1�� ����
/*
int main()
{
	int a = -10, b = -11;

	if (a > 0)							// -10 < 0 �̹Ƿ� ����
	{
		b = 1;
	}
	else if (a == 0)						// -10 == 0 �̹Ƿ� ����
	{
		b = 2;
	}
	else 							// ���� ���ǵ��� ��� �����̹Ƿ� ����
	{
		b = 3;						// b�� 3�� ����
	}
	printf("b : %d\n", b);
} */
// 2�� ����
/*
int main()
{
	int rank, m = 2;

	switch (m)							// m = 2
	{
	case 1:						// ����
		rank = 300;
	case 2:						// �������� break�� ��� case 3 ���� 
		rank = 200;
	case 3:
		rank = 100;
		break;					// break�� ���� switch ����		// rank�� 100�� ����
	default:						// ���� �Ǿ����Ƿ� ���� x
		m = 10;
	}
	printf("rank : %d\n", rank);
} */
// 3�� ����
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
// 4�� ����
/*
int main()
{
	int ary[5];							// ���ӵ� ������ 5���� ������ ����
	ary[0] = 3;						// 0��° �濡 3�� ����
	ary[1] = 5;						// 1��° �濡 5�� ����

	scanf("%d", &ary[3]); 					// �Է°� 9
	printf("%d %d \n", ary[2], ary[3]);
} */
// 5�� ����
/*
int main()
{
	char str[3]; 						// ���ӵ� ������ 3���� ������ ����, �ʱ�ȭ X
	str[0] = 'O';						// 0��° �濡 'O' ���� �ʱ�ȭ
	str[1] = 'k';						// 1��° �濡 'k' ���� �ʱ�ȭ

	str[1] = '@';						// �ٽ� 1��° �濡 '@' �� ����
	str[2] = '\0';						// 2��° �濡 '\0' ���� �ʱ�ȭ

	printf("%s\n", str);						// %s�� ���ڿ� ���, %s�� �ּҰ��� �ް�, �� �ּҰ� �ȿ� ����Ǿ� �ִ� ���ڸ� �������� \0(NULL)�� ������ ���� ����
} */
// 6�� ����
/*
int main()
{
	char str1[80] = "cat";					// str1[0] : c, str1[1] : a, str1[2] : t�� �ʱ�ȭ
	char str2[80];

	strcpy(str1, "tiger");					// str1�� tiger�� ����
	strcpy(str2, str1);						// str2�� str1�� ����

	printf("%s %s\n", str2, str1);
} */
// 7�� ����
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
// 8�� ����
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