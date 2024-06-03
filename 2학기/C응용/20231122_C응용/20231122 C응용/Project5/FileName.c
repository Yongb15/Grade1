#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*#define SIZE 10
#define SQUARE(x) ((x) * (x))
#define DEBUG_LEVEL 1 */

/*
void print_array(const int arr[], int size, FILE* stream)
{
	int i;
	for (i = 0; i < size; i++)
		fprintf(stream, "%2d ", arr[i]);
	fprintf(stream, "\n");

}

int main()
{
	int arr[] = { 60,34,55,28,12,5,63,45,91 };
	int size = sizeof(arr) / sizeof(arr[0]);
	char filename[128] = "";

	FILE* fp = NULL;

	printf("파일 이름? ");
	gets_s(filename, sizeof(filename));
	fp = fopen(filename, "w");

	if (fp == NULL)
		fp = stdout;
	print_array(arr, size, fp);
	fclose(fp);
} */
/*
int is_equal_array(const int x[], const int y[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
		if (x[i] != y[i])
			return 0;
	return 1;
}

int main()
{
	int arr1[SIZE] = { 60,34,55,28,12,5,63,45,91 };
	int arr2[SIZE];
	FILE* fp = NULL;

	fp = fopen("test.dat", "wb");
	
	if (fp == NULL)
	{
		printf("출력용 파일 열기 실패\n");
		return 1;
	}

	fwrite(arr1, sizeof(arr1[0]), SIZE, fp);
	fclose(fp);
	fp = NULL;

	fp = fopen("test.dat", "rb");
	
	if (fp == NULL)
	{
		printf("입력용 파일 열기 실패");
		return 1;
	}

	fread(arr2, sizeof(arr2[0]), SIZE, fp);
	fclose(fp);
	fp = NULL;

	if (is_equal_array(arr1, arr2, SIZE))
		printf("2진 파일 입출력 성공\n");
	else
		printf("2진 파일 입출력 실패\n");

	printf("현재 파일이름은 %s이고 \n 현재 날짜는 %s이고\n 함수 이름은 %s이고, 라인번호는 %d입니다.\n", __FILE__, __DATE__, __FUNCTION__, __LINE__);

} */
/*
int main()
{
	FILE* fp = NULL;
	char str[300];
	fp = fopen("kang.txt", "r");
	fseek(fp, 10, SEEK_SET);
	fgets(str, 200, fp);
	printf("%ld \n", ftell(fp));
	printf("%s ", str);
} */
/*
int square(int x)
{
	return x * x;
}
int main()
{
	int a;

	printf("SQUARE(10) = %d\n", SQUARE(10));
	printf("SQUARE(1.5) = %f\n", SQUARE(1.5));
	printf("SQUARE(\'a\') = %d\n", SQUARE('a'));

	printf("square(1+2) = %d\n", square(1 + 2));
	printf("SQUARE(1+2) = %d\n", SQUARE(1 + 2));

	a = 5;

	printf("square(++a) = %d\n", square(++a));

	a = 5;

	printf("SQUARE(++a) = %d\n", SQUARE(++a));

	printf("square(3.1) = %d\n", square(3.1));
	printf("SQUARE(3.1) = %f\n", SQUARE(3.1));
} */
/*
struct point
{
	int x, y;
};

void print_point(const struct point* ptr);

int main()
{
	struct point arr[3] = { {10, 20}, {30,40}, {50,60} };
	int i;
	
	for (i = 0; i < 3; i++)
		print_point(&arr[i]);
}

void print_point(const struct point* ptr)
{
#if DEBUG_LEVEL == 1
	printf("print_point is called\n");
#elif DEBUG_LEVEL == 2
	printf("print_point: ptr = %p\n");
#elif DEBUG_LEVEL == 3
	printf("print_point: ptr = %p, ptr->x = %d, ptr->y = %d\n", ptr, ptr->x, ptr->y);
#endif
	printf("(%d, %d)\n", ptr->x, ptr->y);
} */
/*
int global;								// 전역 변수

int main()
{
	printf("global value : %d \n", global);
	global = 33;
	print_global();
	print_global();
	print_global();
	printf("global value : %d \n", global);
} */

void accumulator(char op, int rhs);

int main()
{
	while (1)
	{
		char op;
		int num;

		printf("연산자와 정수를 입력하세요(. 0 입력시 종료): ");
		scanf(" %c %d", &op, &num);

		if (op == '.' && num == 0)
			break;
		accumulator(op, num);
	}
}

void accumulator(char op, int rhs)
{
	static int result = 0;
	
	printf("%d ", result);

	switch (op) {
	case '+':
		result += rhs;
		break;
	case '-':
		result -= rhs;
		break;
	case '*':
		result *= rhs;
		break;
	case '/':
		result /= rhs;
		break;
	default :
		return;
	}
	printf("%c %d = %d\n", op, rhs, result);
}