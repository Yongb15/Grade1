#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 10

// 배열

/* void main() {

	int a, b;

	printf("%p, %p", &a, &b);						// &주소, 메모리에 비연속적으로 할당

	// int arr[100];
	// 400byte <- int형 배열, int == 4byte, 자료형 선언시에는 개수
	// arr[28] <- 자료형이 없을시에는 번지, 배열의 시작은 0부터이므로 29번째 방
	// 변수 100개, arr[0] ~ arr[99]
	// arr은 배열의 첫번째 주소
}*/

/* void main() {
	
	int arr[100];

	printf("%d, %d\n", sizeof(arr), sizeof(arr[5]));
	
	// sizeof(arr) <- 배열의 크기
	// sizeof(arr[5]) <- 6번째 방의 크기
}*/

/* void main() {

	int arr[100];

	printf("%p %p %p\n", &arr[0], arr, &arr[2]);

	// arr은 첫번째 방의 주소이므로 &를 안써도 됨.
	// arr == arr[0]의 주소는 같음
	// arr[2] == arr[0] 보다 8byte 차이가 난다.
} */

/* void main() {

	int arr[100];
	
	printf("%p %p %p %p\n", arr, &arr[0], &arr[2], arr + 2);

	// arr+1 == arr[1], arr+2 == arr[2]
} */

/* void main() {

	int arr[100];

	printf("%d %d %d", arr[3], arr[7], arr[99]);

	// 쓰레기값이 나온다
} */

/* void main() {

	int arr[100] = { 0 };

	printf("%d %d %d", arr[3], arr[7], arr[99]);

	// 0으로 초기화
} */

/* void main() {

	int arr[100] = { 10, 45, 23, 67, 88 };

	printf("%d %d %d", arr[3], arr[7], arr[90]);

	// 나머지 방은 0으로 초기화
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
	// scanf는 주소(&)가 필요

	printf("%d %d %d", *arr, arr[2], arr[10]);
	// arr+2

} */

/* void main() {

	char str[100];
	char bb = 'a';

	printf("%d %d %d", sizeof(str), sizeof('a'), sizeof(bb));

	// 100, 4, 1
	// 'a'가 4가 나오는 이유는 아스키코드로 정의되어있기때문
	// char변수로 선언했을때는 1byte로 나오고 char변수로 선언하지 않았을때는 4byte로 나온다.
	// 'a' 로 찍을경우에는 97이 나온다.
} */

/* void main() {
* 
	// str[0] = g, str[1] = a, str[2] = m, str[3] = e
	// 문자열 String, "" == NULL값

	// char a = ' ';
	// char 에서 ''일 시에는 NULL값이 들어간다.

	// str[50] = 'abc';, X
	// 맨 뒤에 있는 c가 출력

	// printf("%c %c %c %c", str[0], str[2], str[88], str[50]);
} */

/* void main() {

	// char str[100] = { 'v' };
	// char str[4] = "game";
	// printf("%s", str);
	// game儆儆儆儆儆 출력
	// 첫번째 방만 'v'가 들어감 그외에는 0으로 초기화, 'a' == 문자, %c 

	char str[20] = "gameofdance";

	// str[5] = '\0';
	// \0 은 문자의 끝

	printf("%s", &str[4]);

	// 5번째부터 시작
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

/* unsigned int absolute(int x) {				// unsigned int <- 양수값만 나옴

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

	// printf("arr[10] = %d\n", arr[10]); 오류ㄴ
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