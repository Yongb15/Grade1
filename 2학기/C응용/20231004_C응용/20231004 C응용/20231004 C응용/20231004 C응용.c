#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

// ������
/*
int main() {

	int a = 25;
	int* p = 20;

	printf("%p ", p);										// 0000000000000014 ���
} */

/*
int main() {

	int a = 25;
	int* p = &a;

	printf("%p ", p);										// 00000050A27AFC64 ���
} */

/*
int main() {

	int a = 25;
	int* p = &a;

	printf("%p ", *p);										// 00000050A27AFC64 ���
}*/

/*
int main() {

	int a = 25;
	int* p = &a;

	printf("%d ", *p);										// 25 ���
} */

/*
int main() {

	int a = 25;
	int* p = &a;
	*p = 99;

	printf("%d ", *p);										// 99 ���
} */

/*
int main() {

	int a = 25;
	int* p = &a;
	*p = 99;

	printf("%d ", a);													// 99 ���
} */

// 2�� ������
/*
int main() {

	int a = 25;
	int* p = &a;
	int** q = &p;

	*p = 99;
	**q = 77;

	printf("%d %d %d", *p, a, **q);										// 77, 77, 77 ���
} */

// 3�� ������
/*
int main() {
	
	int a = 25;
	int* p = &a;
	int** q = &p;
	int*** x = &q;

	*p = 99;
	**q = 77;
	***x = 55;

	printf("%d %d %d %d", *p, a, **q, ***x);							// 55, 55, 55, 55 ���
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

	printf("%d %d %d %d\n", *p, a, **q, ***x);							// 55, 55, 55, 55 ���
	printf("%p %p ", p, *q);											// 00000047542FF614 00000047542FF614
} */

// �������� ����Ʈ ũ�� ���ϱ�
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

// NULL��
/*
int main() {

	int a = 25;
	int* p = &a;
	int** q = &p;
	int*** x = &q;

	*p = 99;
	**q = 77;
	***x = 55;

	printf("%d %d %d %d %d\n", *p, a, **q, ***x, NULL);							// 55, 55, 55, 55 ���
	printf("%p %p ", p, *q);											// 00000047542FF614 00000047542FF614
} */

// �ּ�
/*
int main() {

	int a = 25;
	int* p = &a;
	int** q = &p;
	int*** x = &q;

	*p = 99;
	**q = 77;
	***x = 55;

	printf("%d %d %d %d %d\n", *p, &a, &**q, ***x, NULL);				// 55, a�� �ּ�, a�� �ּ�, 55 ���
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

// �������� �뵵
/*
void test1(int *x)											// 2. x�� �ּҸ� ����
{
	*x = 20;												// 3. x�� ����Ű�� ���� 20 �ֱ�
}

int main() 
{
	int x = 10;
	int* p = &x;

	test1(&*p);												// 1. x�� �ּҸ� �ѱ�	// 4. x�� 20���� �ٲ�

	printf("x = %d\n", x);									// 20 ���
} */

// const : constant = ������
/*
int main() {

	int b = 10, d = 33;
	const int *a = &b;										// a ���� ���ؼ� ���� ����Ų��.
	
	// *a = 44;

	a = &d;
	printf("%d\n ", *a);									// d�� �� ���

	int* const c = &b;										// c ���� �� �ٲ۴�.

	// c = &d;												// c ���� �� �ٲ۴�.
	*c = 222;												// c�� ���� ���ؼ� ���� ����
	
} */

// �����Ϳ� ������
/*
int main() {
	
	int arr[5] = { 10,20,30,40,50 };
	int* p = arr;											// &arr[0]
	// int* p = arr+2;										// arr+2 �� arr[2]�� ���� 30�� ����

	p[2] = 33;												// �����͸� �迭�� ���� ���

	printf("%d\n", p[2]);									// 33 ���
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

// ����

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

// ���� �Լ�
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

// ��� �Ű������� ���� �Լ�
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
