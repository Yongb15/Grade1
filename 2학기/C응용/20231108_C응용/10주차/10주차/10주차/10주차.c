#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "struct.h"
#include <math.h>
#define kim 44

// enum 열거체
/*
// enum aa { north, south, east, west};
// enum aa { north = 33, south = 66, east, west };

int main(){
	// printf("%d %d %d %d", north, south, east, west);			// 값이 정해져 있지 않으면 0, 1, 2, 3
	// printf("%d %d %d %d", north, south, east, west);			// north만 33으로 정해져 있으면 33, 34, 35, 36
	printf("%d %d %d %d", north, south, east, west);			// north가 33, south는 66으로 정의되어 있으면 33, 66, 67, 68

} */

// struct 구조체
/*
struct content												// 틀
{
	char title[40];											// title 배열의 첫 번째 주소
	int price;
	double rate;
};

int main()
{
	struct content c1 = { "warmup C", 20000, 5.6 };

	printf("%s %d %.1lf\n", c1.title, c1.price, c1.rate);	// 구조체 변수를 사용 시 '.' 사용

} */

// struct 구조체형 포인터
/*
struct content												// 틀
{
	char title[40];											// title 배열의 첫 번째 주소
	int price;
	double rate;
};

int main()
{
	struct content c1 = { "warmup C", 20000, 5.6 };
	struct content* p = &c1;								// 구조체를 포인터로 접근할 경우에는 '->' 사용

	printf("%s %d %.1lf\n", c1.title, c1.price, c1.rate);
	printf("%s %d %.1lf\n", p->title, p->price, p->rate);

} */

// 구조체 접근 방법
/*
struct content												// 틀
{
	char title[40];											// title 배열의 첫 번째 주소
	int price;
	double rate;
};

int main()
{
	struct content c1 = { "warmup C", 20000, 5.6 };
	struct content* p = &c1;								// 구조체를 포인터로 접근할 경우에는 '->' 사용

	printf("%s %d %.1lf\n", c1.title, c1.price, c1.rate);
	printf("%s %d %.1lf\n", (*p).title, (*p).price, (*p).rate);	// (*p). 로도 접근이 가능하다.
	printf("메모리 크기는 %d\t", sizeof(struct content));
	printf("%d\t", sizeof(c1));
	printf("%d\t", sizeof(*p));
} */

// 구조체가 비어있을 경우 정수는 0, 실수는 0.0, 문자열은 NULL값이 자동으로 들어감
/*
struct content												// 틀
{
	char title[40];											// title 배열의 첫 번째 주소
	int price;
	double rate;
};

int main()
{
	struct content c1 = { "warmup C", 20000, };
	struct content* p = &c1;								// 구조체를 포인터로 접근할 경우에는 '->' 사용

	printf("%s %d %.1lf\n", c1.title, c1.price, c1.rate);
	printf("%s %d %.1lf\n", (*p).title, (*p).price, (*p).rate);	// (*p). 로도 접근이 가능하다.
	printf("메모리 크기는 %d\t", sizeof(struct content));
	printf("%d\t", sizeof(c1));
	printf("%d\t", sizeof(*p));
} */

// 구조체를 정의하면서 구조체 변수 선언
/*
struct content												// 틀
{
	char title[40];											// title 배열의 첫 번째 주소
	int price;
	double rate;
} c4, c5;													// 구조체형 변수 선언

int main()
{
	struct content c1 = { "warmup C", 20000, 5.6 };
	struct content* p = &c1;								// 구조체를 포인터로 접근할 경우에는 '->' 사용

	printf("%s %d %.1lf\n", c1.title, c1.price, c1.rate);

	c4 = c1;
	p = &c4;												// 실행결과 동일

	printf("%s %d %.1lf\n", (*p).title, (*p).price, (*p).rate);	// (*p). 로도 접근이 가능하다.
	printf("메모리 크기는 %d\t", sizeof(struct content));
	printf("%d\t", sizeof(c1));
	printf("%d\t", sizeof(*p));
} */

// 구조체 문자열 삽입
/*
struct content												// 틀
{
	char title[40];											// title 배열의 첫 번째 주소
	int price;
	double rate;
} c4, c5;													// 구조체형 변수 선언

int main()
{
	struct content c1 = { "warmup C", 20000, 5.6 };
	struct content* p = &c1;								// 구조체를 포인터로 접근할 경우에는 '->' 사용

	printf("%s %d %.1lf\n", c1.title, c1.price, c1.rate);

	c4 = c1;
	p = &c4;												// 실행결과 동일
	// c4.title = "kim";									// 문자열 넣기 불가능
	strcpy(c4.title, "kim");								// strcpy로 문자열 넣기 가능

	printf("%s %d %.1lf\n", (*p).title, (*p).price, (*p).rate);	// (*p). 로도 접근이 가능하다.
	printf("메모리 크기는 %d\t", sizeof(struct content));
	printf("%d\t", sizeof(c1));
	printf("%d\t", sizeof(*p));
} */

// 헤더파일 추가
/*
int main()
{
	struct content c1 = { "warmup C", 20000, 5.6 };
	struct content* p = &c1;								// 구조체를 포인터로 접근할 경우에는 '->' 사용

	printf("%s %d %.1lf\n", c1.title, c1.price, c1.rate);

	c4 = c1;
	p = &c4;												// 실행결과 동일
	// c4.title = "kim";									// 문자열 넣기 불가능
	strcpy(c4.title, "kim");								// strcpy로 문자열 넣기 가능

	printf("%s %d %.1lf\n", (*p).title, (*p).price, (*p).rate);	// (*p). 로도 접근이 가능하다.
	printf("메모리 크기는 %d\t", sizeof(struct content));
	printf("%d\t", sizeof(c1));
	printf("%d\t", sizeof(*p));
} */

// 구조체 배열의 선언 및 초기화, 사용
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
		printf("arr[%d] = %s, %d, %1.f\n", i, (*(arr+i)).title, (*(arr + i)).price, (*(arr + i)).rate);			// (*(arr+i)) 값이 먼저 계산되기 위해 괄호를 한번 더 사용
	}
} */

// 구조체 배열의 검색
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

	printf("제목? ");
	gets_s(title, sizeof(title));

	for (i = 0; i < size; i++)
	{
		if (strcmp(arr[i].title, title) == 0)
		{
			printf("%s: 가격=%d, 평점=%1.f\n", (*(arr+i)).title, (*(arr + i)).price, (*(arr + i)).rate);
			break;
		}
	}

	if (i == size)
	{
		printf("해당 콘텐츠를 찾을 수 없습니다.");
	}

} */

// direction 열거체의 정의 및 사용
/*
enum direction { north, south, east, west };						// 열거체와 열거 상수 정의

int main()
{
	enum direction moves[] = {										// 열거체 배열 (이동 배열을 순서대로 저장)
		north, north, east, south, south, west,
	};

	int size = sizeof(moves) / sizeof(moves[0]);
	int i;

	printf("이동 순서: ");

	for (i = 0; i < size; i++)
	{
		switch (moves[i]) {											// moves[i] 열거체 변수의 값에 따라 처리
		case north:													// 열거 상수는 case문에 사용할 수 있다.
			printf("북 ");
			break;

		case south:
			printf("남 ");
			break;
		case east:
			printf("동 ");
			break;
		case west:
			printf("서 ");
			break;
		}
	}
	printf("\n");
} */

// test 공용체의 정의 및 사용
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

	printf("t1.i의 주소 = %p\n", &t1.i);
	printf("t1.c의 주소 = %p\n", &t1.c);
	printf("t1.s의 주소 = %p\n", &t1.s);

	printf("sizeof(union test) = %d\n", sizeof(union test));

	printf("t1.i = %d\n", t1.i);
	printf("t1.c = %d\n", t1.c);
	printf("t1.s = %d\n", t1.s);
} */

// typedef의 정의 및 사용

typedef struct point									// point 구조체를 정의하면서 함께 typedef를 정의한다.
{
	int x, y;
} point_t;

void print_point(const point_t* ptr);					// point_t를 매개변수의 데이터형으로 사용한다.

int main()
{
	point_t pt1 = { 10,20 };							// struct point 대신 point_t형을 사용할 수 있다.
	print_point(&pt1);
}

void print_point(const point_t* ptr)
{
	printf("(%d, %d) ", ptr->x, ptr->y);
}