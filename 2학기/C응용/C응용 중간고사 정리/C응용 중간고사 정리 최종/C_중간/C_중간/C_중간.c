#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1�� ����
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
// ��°� : b : 1 */
// 2�� ����
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
// ��°� : rank : 100 */
// 3�� ����
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
// ��°� : app    app	*/	
// 4�� ����
/*
int main()
{
	int ary[5];
	ary[0] = 3;
	ary[1] = 5;
	ary[2] = ary[0] + ary[1];

	scanf("%d", &ary[3]);				// �Է°� : 9
	printf("%d, %d\n", ary[2], ary[3]);
}
// ��°� : 8, 9 */
// 5�� ����
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
// ��°� : O@ */
// 6�� ����
/*
int main()
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);

	printf("%s, %s\n", str2, str1);
} 
// ��°� : tiger, tiger */
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
}
// ��°� : 88 88 */
// 8�� ����
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
// ��°� : 2020 */
// 9�� ����
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
// ��°� : 888 148 888 */
// 10�� ����
/*
int main()
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	printf("%d ", *ary);
	printf("%d\n", ary[1] + ary[3]);
}
// ��°� : 10 60 */
// 11�� ����
/*
int main()
{
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("%5d", *(ary + 1));
}
// ��°� : ___20 */
// 12�� ����
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
// ��°� : 2 20 */
// 13�� ����
/*
int main()
{
	printf("%d ", 'c');
	printf("%c ", 99);
	printf("%d\n", sizeof('c'));			// 'a' => 97��
}
// ��°� : 99 c 4 */
// 14�� ����
/*
int main()
{
	char small, cap = 'B';							// B = 66 
		
	if ((cap >= 'A') && (cap <= 'Z'))				// A = 65
	{
		small = cap + ('a' - 'A');					// 66 + (97 - 65) = 98
	}
	printf("%c", cap);								// 66�� �ƽ�Ű�ڵ��� B
	printf("%c", small);							// 98�� �ƽ�Ű�ڵ��� b
} 
//��°� : Bb */
// 15�� ����
/*
int main()
{
	char ch;
	int i;
	
	for (i = 0; i < 4; i++)
	{
		scanf("%c", &ch);				// yuhan �Է�
		printf("%c", ch);
	}
} 
// ��°� : yuh */
// 16�� ����
/*
int main()
{
	printf("%c", *"mango");
	printf("%c", *("mango") + 3);
	printf("%d\n", "mango"[1]);
}
// ��°� : mp97 */
// 17�� ����
/*
int main()
{
	char str[80] = "yuhan";
	char* ps = "smart-app";

	puts(str);
	fputs(ps, stdout);
	puts("ȭ����");
}
// ��°� : yuhan
//			smart-appȭ���� */
// 18�� ����
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
// ��°� : kimimm */
// 19�� ����
/*
int main()
{
	int a = 10;
	int* p = &a;

	*p = 20;

	printf("%d", a);
}
// ��°� : 20 */
// 20�� ����
/*
int main()
{
	while (0)
	{
		printf("%s", "kim");
	}
}
// ��°� : */
// 21�� ����
/*
int main()
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";

	strcpy(str1, str2);

	printf("%s", str1);
}
// ��°� : apple */
// 22�� ����
/* ���ߺ���
*/
// 23�� ����
/*
int main()
{
	char str[20] = "mango tree";

	strncpy(str, "apple", 3);

	printf("%s\n", str);
}
// ��°� : appgo tree */
// 24�� ����
/*
int main()
{
	char str[20] = "mango tree";
	
	printf("%d %d\n", strlen(str), sizeof(str));
}
// ��°� : 10 20 */
// 25�� ����
/*
���ߺ��� */
// 26�� ����
/* ���ߺ��� 
*/
// 27�� ����
/* ���ߺ��� 
*/
// 28�� ����
/*
int main()
{
	printf("%d ", 'b');						// 'a' => 97
	printf("%c ", 98);
	printf("%d\n", sizeof("kim"));
}
// ��°� : 98 b 4 */
// 29�� ����
/*
int main()
{
	char str[80] = "straw";

	strncat(str, "piece", 3);

	printf("%s\n", str);
}
// ��°� : strawpie */
// 30�� ����
/*
int main()
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	if (strncmp(str1, str2, 3) == 0)
	{
		printf("����.");
	}
	else
	{
		printf("�ٸ���.");
	}
}
// ��°� : ����. */
// 31�� ����
/* ���ߺ���
*/
// 32�� ����
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
// ��°� : 1156 */
// 33~34�� ����
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
// 33�� ����
// ù��° �� ��� ��� : 5
//						 5
//						 5
// 34�� ����
// �ι�° �� ��� ��� : 11
//						 12
//						 13 */
// 35�� ����
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
// ��°� : 10 */
// 36�� ����
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
// ��°� : 20 */