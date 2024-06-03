#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "struct.h"
#include <math.h>
#define kim 44

// enum ����ü
/*
// enum aa { north, south, east, west};
// enum aa { north = 33, south = 66, east, west };

int main(){
	// printf("%d %d %d %d", north, south, east, west);			// ���� ������ ���� ������ 0, 1, 2, 3
	// printf("%d %d %d %d", north, south, east, west);			// north�� 33���� ������ ������ 33, 34, 35, 36
	printf("%d %d %d %d", north, south, east, west);			// north�� 33, south�� 66���� ���ǵǾ� ������ 33, 66, 67, 68

} */

// struct ����ü
/*
struct content												// Ʋ
{
	char title[40];											// title �迭�� ù ��° �ּ�
	int price;
	double rate;
};

int main()
{
	struct content c1 = { "warmup C", 20000, 5.6 };

	printf("%s %d %.1lf\n", c1.title, c1.price, c1.rate);	// ����ü ������ ��� �� '.' ���

} */

// struct ����ü�� ������
/*
struct content												// Ʋ
{
	char title[40];											// title �迭�� ù ��° �ּ�
	int price;
	double rate;
};

int main()
{
	struct content c1 = { "warmup C", 20000, 5.6 };
	struct content* p = &c1;								// ����ü�� �����ͷ� ������ ��쿡�� '->' ���

	printf("%s %d %.1lf\n", c1.title, c1.price, c1.rate);
	printf("%s %d %.1lf\n", p->title, p->price, p->rate);

} */

// ����ü ���� ���
/*
struct content												// Ʋ
{
	char title[40];											// title �迭�� ù ��° �ּ�
	int price;
	double rate;
};

int main()
{
	struct content c1 = { "warmup C", 20000, 5.6 };
	struct content* p = &c1;								// ����ü�� �����ͷ� ������ ��쿡�� '->' ���

	printf("%s %d %.1lf\n", c1.title, c1.price, c1.rate);
	printf("%s %d %.1lf\n", (*p).title, (*p).price, (*p).rate);	// (*p). �ε� ������ �����ϴ�.
	printf("�޸� ũ��� %d\t", sizeof(struct content));
	printf("%d\t", sizeof(c1));
	printf("%d\t", sizeof(*p));
} */

// ����ü�� ������� ��� ������ 0, �Ǽ��� 0.0, ���ڿ��� NULL���� �ڵ����� ��
/*
struct content												// Ʋ
{
	char title[40];											// title �迭�� ù ��° �ּ�
	int price;
	double rate;
};

int main()
{
	struct content c1 = { "warmup C", 20000, };
	struct content* p = &c1;								// ����ü�� �����ͷ� ������ ��쿡�� '->' ���

	printf("%s %d %.1lf\n", c1.title, c1.price, c1.rate);
	printf("%s %d %.1lf\n", (*p).title, (*p).price, (*p).rate);	// (*p). �ε� ������ �����ϴ�.
	printf("�޸� ũ��� %d\t", sizeof(struct content));
	printf("%d\t", sizeof(c1));
	printf("%d\t", sizeof(*p));
} */

// ����ü�� �����ϸ鼭 ����ü ���� ����
/*
struct content												// Ʋ
{
	char title[40];											// title �迭�� ù ��° �ּ�
	int price;
	double rate;
} c4, c5;													// ����ü�� ���� ����

int main()
{
	struct content c1 = { "warmup C", 20000, 5.6 };
	struct content* p = &c1;								// ����ü�� �����ͷ� ������ ��쿡�� '->' ���

	printf("%s %d %.1lf\n", c1.title, c1.price, c1.rate);

	c4 = c1;
	p = &c4;												// ������ ����

	printf("%s %d %.1lf\n", (*p).title, (*p).price, (*p).rate);	// (*p). �ε� ������ �����ϴ�.
	printf("�޸� ũ��� %d\t", sizeof(struct content));
	printf("%d\t", sizeof(c1));
	printf("%d\t", sizeof(*p));
} */

// ����ü ���ڿ� ����
/*
struct content												// Ʋ
{
	char title[40];											// title �迭�� ù ��° �ּ�
	int price;
	double rate;
} c4, c5;													// ����ü�� ���� ����

int main()
{
	struct content c1 = { "warmup C", 20000, 5.6 };
	struct content* p = &c1;								// ����ü�� �����ͷ� ������ ��쿡�� '->' ���

	printf("%s %d %.1lf\n", c1.title, c1.price, c1.rate);

	c4 = c1;
	p = &c4;												// ������ ����
	// c4.title = "kim";									// ���ڿ� �ֱ� �Ұ���
	strcpy(c4.title, "kim");								// strcpy�� ���ڿ� �ֱ� ����

	printf("%s %d %.1lf\n", (*p).title, (*p).price, (*p).rate);	// (*p). �ε� ������ �����ϴ�.
	printf("�޸� ũ��� %d\t", sizeof(struct content));
	printf("%d\t", sizeof(c1));
	printf("%d\t", sizeof(*p));
} */

// ������� �߰�
/*
int main()
{
	struct content c1 = { "warmup C", 20000, 5.6 };
	struct content* p = &c1;								// ����ü�� �����ͷ� ������ ��쿡�� '->' ���

	printf("%s %d %.1lf\n", c1.title, c1.price, c1.rate);

	c4 = c1;
	p = &c4;												// ������ ����
	// c4.title = "kim";									// ���ڿ� �ֱ� �Ұ���
	strcpy(c4.title, "kim");								// strcpy�� ���ڿ� �ֱ� ����

	printf("%s %d %.1lf\n", (*p).title, (*p).price, (*p).rate);	// (*p). �ε� ������ �����ϴ�.
	printf("�޸� ũ��� %d\t", sizeof(struct content));
	printf("%d\t", sizeof(c1));
	printf("%d\t", sizeof(*p));
} */

// ����ü �迭�� ���� �� �ʱ�ȭ, ���
/*
struct content
{
	char title[40];
	int price;
	double rate;
};

int main()
{
	struct content arr[] = {
		{"Avengers", 11000, 8.8},
		{"Aquaman", 5500, 7.1},
		{"Shazam", 7700, 7.4}
	};

	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	for (i = 0; i < size; i++) 
	{
		// printf("arr[%d] = %s, %d, %1.f\n", i, arr[i].title, arr[i].price, arr[i].rate);
		printf("arr[%d] = %s, %d, %1.f\n", i, (*(arr+i)).title, (*(arr + i)).price, (*(arr + i)).rate);			// (*(arr+i)) ���� ���� ���Ǳ� ���� ��ȣ�� �ѹ� �� ���
	}
} */

// ����ü �迭�� �˻�
/*
struct content 
{
	char title[40];
	int price;
	double rate;
};

int main()
{
	struct content arr[] = {
		{"Avengers", 11000, 8.8}, {"Aquaman", 5500, 7.1}, {"Shazam", 7700, 7.4},
		{"X-man", 3300, 8.0}, {"Us", 8800, 7.1}, {"Inception", 2200, 8.7}
	};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;
	char title[40];

	printf("����? ");
	gets_s(title, sizeof(title));

	for (i = 0; i < size; i++)
	{
		if (strcmp(arr[i].title, title) == 0)
		{
			printf("%s: ����=%d, ����=%1.f\n", (*(arr+i)).title, (*(arr + i)).price, (*(arr + i)).rate);
			break;
		}
	}

	if (i == size)
	{
		printf("�ش� �������� ã�� �� �����ϴ�.");
	}

} */

// direction ����ü�� ���� �� ���
/*
enum direction { north, south, east, west };						// ����ü�� ���� ��� ����

int main()
{
	enum direction moves[] = {										// ����ü �迭 (�̵� �迭�� ������� ����)
		north, north, east, south, south, west,
	};

	int size = sizeof(moves) / sizeof(moves[0]);
	int i;

	printf("�̵� ����: ");

	for (i = 0; i < size; i++)
	{
		switch (moves[i]) {											// moves[i] ����ü ������ ���� ���� ó��
		case north:													// ���� ����� case���� ����� �� �ִ�.
			printf("�� ");
			break;

		case south:
			printf("�� ");
			break;
		case east:
			printf("�� ");
			break;
		case west:
			printf("�� ");
			break;
		}
	}
	printf("\n");
} */

// test ����ü�� ���� �� ���
/*
union test
{
	int i;
	char c;
	short s;
};

int main()
{
	union test t1 = { 12345678 };

	printf("t1.i�� �ּ� = %p\n", &t1.i);
	printf("t1.c�� �ּ� = %p\n", &t1.c);
	printf("t1.s�� �ּ� = %p\n", &t1.s);

	printf("sizeof(union test) = %d\n", sizeof(union test));

	printf("t1.i = %d\n", t1.i);
	printf("t1.c = %d\n", t1.c);
	printf("t1.s = %d\n", t1.s);
} */

// typedef�� ���� �� ���

typedef struct point									// point ����ü�� �����ϸ鼭 �Բ� typedef�� �����Ѵ�.
{
	int x, y;
} point_t;

void print_point(const point_t* ptr);					// point_t�� �Ű������� ������������ ����Ѵ�.

int main()
{
	point_t pt1 = { 10,20 };							// struct point ��� point_t���� ����� �� �ִ�.
	print_point(&pt1);
}

void print_point(const point_t* ptr)
{
	printf("(%d, %d) ", ptr->x, ptr->y);
}