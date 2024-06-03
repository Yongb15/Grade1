#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1번 문제
/*
int main()
{
	int a = 10;
	int b = -11;

	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}
	printf("b : %d\n", b);
}
// 출력값 : b : 1 */
// 2번 문제
/*
int main()
{
	int rank, m = 2;

	switch (m)
	{
	case 1:
		rank = 300;
	case 2:
		rank = 200;
	case 3:
		rank = 100;
		break;
	default:
		rank = 10;
	}
	printf("rank : %d\n", rank);
}
// 출력값 : rank : 100 */
// 3번 문제
/*
void fruit(int n)
{
	printf("app\t");

	if (n == 2)
		return;
	fruit(n + 1);
}
void main()
{
	fruit(1);
}
// 출력값 : app    app	*/	
// 4번 문제
/*
int main()
{
	int ary[5];
	ary[0] = 3;
	ary[1] = 5;
	ary[2] = ary[0] + ary[1];

	scanf("%d", &ary[3]);				// 입력값 : 9
	printf("%d, %d\n", ary[2], ary[3]);
}
// 출력값 : 8, 9 */
// 5번 문제
/*
int main()
{
	char str[3];
	str[0] = '0';
	str[1] = 'K';
	str[1] = '@';
	str[2] = '\0';

	printf("%s\n", str);
}
// 출력값 : O@ */
// 6번 문제
/*
int main()
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);

	printf("%s, %s\n", str2, str1);
} 
// 출력값 : tiger, tiger */
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
}
// 출력값 : 88 88 */
// 8번 문제
/*
int main()
{
	int a = 10;
	int b = 20;

	const int* pa = &a;
	pa = &b;

	printf("%d", *pa);
	
	a = 33;

	printf("%d\n", *pa);
} 
// 출력값 : 2020 */
// 9번 문제
/*
int main()
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("%d%d%d ", sizeof(pc), sizeof(pi), sizeof(pd));
	printf("%d%d%d ", sizeof(*pc), sizeof(*pi), sizeof(*pd));
	printf("%d%d%d\n", sizeof(&ch), sizeof(&in), sizeof(&db));
}
// 출력값 : 888 148 888 */
// 10번 문제
/*
int main()
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	printf("%d ", *ary);
	printf("%d\n", ary[1] + ary[3]);
}
// 출력값 : 10 60 */
// 11번 문제
/*
int main()
{
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("%5d", *(ary + 1));
}
// 출력값 : ___20 */
// 12번 문제
/*
int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int* pa = ary;
	int* pb = pa + 3;

	pa++;

	printf("%u ", pb - pa);

	if (pa < pb)
		printf("%d\n", *pa);
	else
		printf("%d\n", *pb);
}
// 출력값 : 2 20 */
// 13번 문제
/*
int main()
{
	printf("%d ", 'c');
	printf("%c ", 99);
	printf("%d\n", sizeof('c'));			// 'a' => 97임
}
// 출력값 : 99 c 4 */
// 14번 문제
/*
int main()
{
	char small, cap = 'B';							// B = 66 
		
	if ((cap >= 'A') && (cap <= 'Z'))				// A = 65
	{
		small = cap + ('a' - 'A');					// 66 + (97 - 65) = 98
	}
	printf("%c", cap);								// 66의 아스키코드인 B
	printf("%c", small);							// 98의 아스키코드인 b
} 
//출력값 : Bb */
// 15번 문제
/*
int main()
{
	char ch;
	int i;
	
	for (i = 0; i < 4; i++)
	{
		scanf("%c", &ch);				// yuhan 입력
		printf("%c", ch);
	}
} 
// 출력값 : yuh */
// 16번 문제
/*
int main()
{
	printf("%c", *"mango");
	printf("%c", *("mango") + 3);
	printf("%d\n", "mango"[1]);
}
// 출력값 : mp97 */
// 17번 문제
/*
int main()
{
	char str[80] = "yuhan";
	char* ps = "smart-app";

	puts(str);
	fputs(ps, stdout);
	puts("화이팅");
}
// 출력값 : yuhan
//			smart-app화이팅 */
// 18번 문제
/*
int main()
{
	char* pc = "kim";
	while (*pc != '\0')
	{
		printf("%s", pc);
		pc++;
	}
}
// 출력값 : kimimm */
// 19번 문제
/*
int main()
{
	int a = 10;
	int* p = &a;

	*p = 20;

	printf("%d", a);
}
// 출력값 : 20 */
// 20번 문제
/*
int main()
{
	while (0)
	{
		printf("%s", "kim");
	}
}
// 출력값 : */
// 21번 문제
/*
int main()
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";

	strcpy(str1, str2);

	printf("%s", str1);
}
// 출력값 : apple */
// 22번 문제
/* ※중복※
*/
// 23번 문제
/*
int main()
{
	char str[20] = "mango tree";

	strncpy(str, "apple", 3);

	printf("%s\n", str);
}
// 출력값 : appgo tree */
// 24번 문제
/*
int main()
{
	char str[20] = "mango tree";
	
	printf("%d %d\n", strlen(str), sizeof(str));
}
// 출력값 : 10 20 */
// 25번 문제
/*
※중복※ */
// 26번 문제
/* ※중복※ 
*/
// 27번 문제
/* ※중복※ 
*/
// 28번 문제
/*
int main()
{
	printf("%d ", 'b');						// 'a' => 97
	printf("%c ", 98);
	printf("%d\n", sizeof("kim"));
}
// 출력값 : 98 b 4 */
// 29번 문제
/*
int main()
{
	char str[80] = "straw";

	strncat(str, "piece", 3);

	printf("%s\n", str);
}
// 출력값 : strawpie */
// 30번 문제
/*
int main()
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	if (strncmp(str1, str2, 3) == 0)
	{
		printf("같다.");
	}
	else
	{
		printf("다르다.");
	}
}
// 출력값 : 같다. */
// 31번 문제
/* ※중복※
*/
// 32번 문제
/*
int main()
{
	int a = 11;
	int b = 44;
	{
		int a = 33;
		b = a + 23;
	}
	printf("%d%d", a, b);
}
// 출력값 : 1156 */
// 33~34번 문제
/*
void auto_func(void)
{
	auto int a = 4;
	a++;
	printf("%d", a);
}
void static_func(void)
{
	static int a = 10;
	a++;
	printf("%d", a);
}
void main()
{
	int i;

	for (i = 0; i < 3; i++)
	{
		auto_func();
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		static_func();
		printf("\n");
	}
}
// 33번 문제
// 첫번째 줄 출력 결과 : 5
//						 5
//						 5
// 34번 문제
// 두번째 줄 출력 결과 : 11
//						 12
//						 13 */
// 35번 문제
/*
void add_ten(int a)
{
	a = a + 10;
}
int main()
{
	int a = 10;

	add_ten(a);

	printf("%d\n", a);
}
// 출력값 : 10 */
// 36번 문제
/*
void add_ten(int *pa)
{
	*pa = *pa + 10;
}
int main()
{
	int a = 10;

	add_ten(&a);

	printf("%d\n", a);
}
// 출력값 : 20 */