#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 10

// �迭

/* void main() {

	int a, b;

	printf("%p, %p", &a, &b);						// &�ּ�, �޸𸮿� �񿬼������� �Ҵ�

	// int arr[100];
	// 400byte <- int�� �迭, int == 4byte, �ڷ��� ����ÿ��� ����
	// arr[28] <- �ڷ����� �����ÿ��� ����, �迭�� ������ 0�����̹Ƿ� 29��° ��
	// ���� 100��, arr[0] ~ arr[99]
	// arr�� �迭�� ù��° �ּ�
}*/

/* void main() {
	
	int arr[100];

	printf("%d, %d\n", sizeof(arr), sizeof(arr[5]));
	
	// sizeof(arr) <- �迭�� ũ��
	// sizeof(arr[5]) <- 6��° ���� ũ��
}*/

/* void main() {

	int arr[100];

	printf("%p %p %p\n", &arr[0], arr, &arr[2]);

	// arr�� ù��° ���� �ּ��̹Ƿ� &�� �Ƚᵵ ��.
	// arr == arr[0]�� �ּҴ� ����
	// arr[2] == arr[0] ���� 8byte ���̰� ����.
} */

/* void main() {

	int arr[100];
	
	printf("%p %p %p %p\n", arr, &arr[0], &arr[2], arr + 2);

	// arr+1 == arr[1], arr+2 == arr[2]
} */

/* void main() {

	int arr[100];

	printf("%d %d %d", arr[3], arr[7], arr[99]);

	// �����Ⱚ�� ���´�
} */

/* void main() {

	int arr[100] = { 0 };

	printf("%d %d %d", arr[3], arr[7], arr[99]);

	// 0���� �ʱ�ȭ
} */

/* void main() {

	int arr[100] = { 10, 45, 23, 67, 88 };

	printf("%d %d %d", arr[3], arr[7], arr[90]);

	// ������ ���� 0���� �ʱ�ȭ
} */

/* void main() {

	int arr[100] = { 10, 45, 23, 67, 88 };

	arr[7] = 777;
	arr[99] = 999;

	printf("%d %d %d", arr[3], arr[7], arr[99]);

} */

/* void main() {

	int arr[100] = { 10, 45, 23, 67, 88 };

	arr[7] = 777;
	arr[99] = 999;

	scanf("%d%d%d", arr, &arr[2], &arr[10]);
	// scanf�� �ּ�(&)�� �ʿ�

	printf("%d %d %d", *arr, arr[2], arr[10]);
	// arr+2

} */

/* void main() {

	char str[100];
	char bb = 'a';

	printf("%d %d %d", sizeof(str), sizeof('a'), sizeof(bb));

	// 100, 4, 1
	// 'a'�� 4�� ������ ������ �ƽ�Ű�ڵ�� ���ǵǾ��ֱ⶧��
	// char������ ������������ 1byte�� ������ char������ �������� �ʾ������� 4byte�� ���´�.
	// 'a' �� ������쿡�� 97�� ���´�.
} */

/* void main() {
* 
	// str[0] = g, str[1] = a, str[2] = m, str[3] = e
	// ���ڿ� String, "" == NULL��

	// char a = ' ';
	// char ���� ''�� �ÿ��� NULL���� ����.

	// str[50] = 'abc';, X
	// �� �ڿ� �ִ� c�� ���

	// printf("%c %c %c %c", str[0], str[2], str[88], str[50]);
} */

/* void main() {

	// char str[100] = { 'v' };
	// char str[4] = "game";
	// printf("%s", str);
	// game���������� ���
	// ù��° �游 'v'�� �� �׿ܿ��� 0���� �ʱ�ȭ, 'a' == ����, %c 

	char str[20] = "gameofdance";

	// str[5] = '\0';
	// \0 �� ������ ��

	printf("%s", &str[4]);

	// 5��°���� ����
} */

/* void main() {

	int arr[ARR_SIZE] = { 1,2,3,4,5 };
	int x[ARR_SIZE] = { 1,2,3 };
	int y[ARR_SIZE] = { 0 };
	int z[] = { -1,0,1 };
	int i, size;

	printf("arr = ");

	for (i = 0; i < ARR_SIZE; i++) {
		printf("%3d ", arr[i]);
	}
	printf("\n");

	printf("x   = ");
	for (i = 0; i < ARR_SIZE; i++) {
		printf("%3d ", x[i]);
	}
	printf("\n");

	printf("y   = ");
	for (i = 0; i < ARR_SIZE; i++) {
		printf("%3d ", y[i]);
	}
	printf("\n");

	printf("z   = ");
	size = sizeof(z) / sizeof(z[0]);
	for (i = 0; i < size; i++) {
		printf("%3d", z[i]);
	}
	printf("\n");
} */

/* unsigned int absolute(int x) {				// unsigned int <- ������� ����

	return x > 0 ? x : -x;
}

void main() {

	int x[ARR_SIZE] = { -4,0,28,3,-12 };
	unsigned int y[ARR_SIZE] = { 0 };
	int i;

	for (i = 0; i < ARR_SIZE; i++) {
		y[i] = absolute(x[i]);
	}

	for (i = 0; i < ARR_SIZE; i++) {
		printf("%d ", y[i]);
	}
	printf("\n");
} */

/* int main() {

	int arr[ARR_SIZE] = { 1, 1 };
	int i;

	for (i = 2; i < ARR_SIZE; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	for (i = 0; i < ARR_SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	// printf("arr[10] = %d\n", arr[10]); ������
	// arr[10] = 100;
} */

int main() {

	int total = 0;

	for (int i = 1; i <= 1000; i++) {
		if (i % 7 == 0) {
			continue;
		}
		total += i;
		printf("%d\n", total);
	}
	printf("%d", total);
}