#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

// 포인터
/*
int main() {

	int a = 25;
	int* p = 20;

	printf("%p ", p);										// 0000000000000014 출력
} */

/*
int main() {

	int a = 25;
	int* p = &a;

	printf("%p ", p);										// 00000050A27AFC64 출력
} */

/*
int main() {

	int a = 25;
	int* p = &a;

	printf("%p ", *p);										// 00000050A27AFC64 출력
}*/

/*
int main() {

	int a = 25;
	int* p = &a;

	printf("%d ", *p);										// 25 출력
} */

/*
int main() {

	int a = 25;
	int* p = &a;
	*p = 99;

	printf("%d ", *p);										// 99 출력
} */

/*
int main() {

	int a = 25;
	int* p = &a;
	*p = 99;

	printf("%d ", a);													// 99 출력
} */

// 2중 포인터
/*
int main() {

	int a = 25;
	int* p = &a;
	int** q = &p;

	*p = 99;
	**q = 77;

	printf("%d %d %d", *p, a, **q);										// 77, 77, 77 출력
} */

// 3중 포인터
/*
int main() {
	
	int a = 25;
	int* p = &a;
	int** q = &p;
	int*** x = &q;

	*p = 99;
	**q = 77;
	***x = 55;

	printf("%d %d %d %d", *p, a, **q, ***x);							// 55, 55, 55, 55 출력
} */

/*
int main() {

	int a = 25;
	int* p = &a;
	int** q = &p;
	int*** x = &q;

	*p = 99;
	**q = 77;
	***x = 55;

	printf("%d %d %d %d\n", *p, a, **q, ***x);							// 55, 55, 55, 55 출력
	printf("%p %p ", p, *q);											// 00000047542FF614 00000047542FF614
} */

// 포인터의 바이트 크기 구하기
/*
int main() 
{
	int* pi;
	double* pd;
	char* pc;

	printf("sizeof(pi) = %d\n", sizeof(pi));						// 8
	printf("sizeof(pd) = %d\n", sizeof(pd));						// 8
	printf("sizeof(pc) = %d\n", sizeof(pc));						// 8

	printf("sizeof(*pi) = %d\n", sizeof(*pi));						// 4
	printf("sizeof(*pd) = %d\n", sizeof(*pd));						// 8
	printf("sizeof(*pc) = %d\n", sizeof(*pc));						// 1

	printf("sizeof(int*) = %d\n", sizeof(int*));					// 8
	printf("sizeof(double*) = %d\n", sizeof(double*));				// 8
	printf("sizeof(char*) = %d\n", sizeof(char*));					// 8
} */

// NULL값
/*
int main() {

	int a = 25;
	int* p = &a;
	int** q = &p;
	int*** x = &q;

	*p = 99;
	**q = 77;
	***x = 55;

	printf("%d %d %d %d %d\n", *p, a, **q, ***x, NULL);							// 55, 55, 55, 55 출력
	printf("%p %p ", p, *q);											// 00000047542FF614 00000047542FF614
} */

// 주소
/*
int main() {

	int a = 25;
	int* p = &a;
	int** q = &p;
	int*** x = &q;

	*p = 99;
	**q = 77;
	***x = 55;

	printf("%d %d %d %d %d\n", *p, &a, &**q, ***x, NULL);				// 55, a의 주소, a의 주소, 55 출력
	printf("%p %p ", p, *q);											// 00000047542FF614 00000047542FF614
} */

/*
int main() {

	int a = 25;
	
	*&a = 20;

	printf("%d", a);
} */
/*
int main() {

	int a = 10;
	int* p = &a;

	printf(" a = %d\n", a);
	printf("&a = %p\n", &a);

	printf(" p = %p\n", p);
	printf("*p = %d\n", *p);
	printf("&p = %p\n", &p);

	*p = 20;
	printf("*p = %d\n", *p);
} */

// 포인터의 용도
/*
void test1(int *x)											// 2. x의 주소를 받음
{
	*x = 20;												// 3. x가 가르키는 값에 20 넣기
}

int main() 
{
	int x = 10;
	int* p = &x;

	test1(&*p);												// 1. x의 주소를 넘김	// 4. x가 20으로 바뀜

	printf("x = %d\n", x);									// 20 출력
} */

// const : constant = 영원히
/*
int main() {

	int b = 10, d = 33;
	const int *a = &b;										// a 값을 통해서 변경 못시킨다.
	
	// *a = 44;

	a = &d;
	printf("%d\n ", *a);									// d의 값 출력

	int* const c = &b;										// c 값을 못 바꾼다.

	// c = &d;												// c 값을 못 바꾼다.
	*c = 222;												// c의 값을 통해서 변경 가능
	
} */

// 포인터와 연산자
/*
int main() {
	
	int arr[5] = { 10,20,30,40,50 };
	int* p = arr;											// &arr[0]
	// int* p = arr+2;										// arr+2 면 arr[2]의 값인 30이 나옴

	p[2] = 33;												// 포인터를 배열과 같이 사용

	printf("%d\n", p[2]);									// 33 출력
} */

/*
int main() {

	int* p = 0x100;
	double* q = 0x100;
	char* r = 0x100;

	printf("int*    : %p, %p, %p\n", p, p+1, p+2);
	printf("int*    : %p, %p, %p\n", q, q + 1, q + 2);
	printf("int*    : %p, %p, %p\n", r, r+ 1, r + 2);
} */

// 같음

/*
int main() {

	int arr[5] = { 1,2,3,4,5 };
	int* p = &arr[0];

	for (int i = 0; i < 5; i++, p++) {

		printf(" p= %p, ", p);
		printf("*p = %d\n ", *p);
	}
} */

/*
int main() {

	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;

	for (int i = 0; i < 5; i++) {

		printf(" p= %p, ", &p[i]);
		printf("*p = %d\n ", p[i]);
	}
} */

// 스왑 함수
/*
void swap(int *x, int *y) 
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 1, b = 2;

	swap(&a, &b);

	printf("%d %d\n", a, b);
} */

// 출력 매개변수를 갖는 함수
/*
void get_sum_product(int x, int y, int* psum, int* pproduct);

int main() 
{
	int sum = 0, product = 0;
	
	get_sum_product(123, 456, &sum, &product);

	printf("sum = %d, product = %d\n", sum, product);
}

void get_sum_product(int x, int y, int* psum, int* pproduct)
{
	*psum = x + y;
	*pproduct = x * y;
} */

void copy_array(const int* source, int* target, int size);
void print_array(const int* arr, int size);

int main() 
{
	int x[SIZE] = { 10,20,30,40,50 };
	int y[SIZE] = { 0 };

	printf("x = ");
	print_array(x, SIZE);
	copy_array(x, y, SIZE);
	printf("y = ");
	print_array(y, SIZE);
}

void copy_array(const int* source, int* target, int size)
{
	int i;

	for (i = 0; i < size; i++) {
		target[i] = source[i];						// *(target + i) = *(source + i)
	}
}


void print_array(const int* arr, int size)
{
	int i;

	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);												// *(arr + i)
	}
	printf("\n");
}
