#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 2
#define SIZE 5

/*
* 2차원 배열
int main() {

	int scores[4][5] = { 0, };

	scanf("%d %d", scores, &scores[2][2]);

	printf("%d %d", **scores, scores[2][2]);									// 이차원 배열이라 이중포인터 사용
	// printf("%d %d", *scores[0], scores[2][2]);								// 입력받은값([0]을 넣어야함.), 입력받은값
	// printf("%p %d", scores, scores[2][2]);									// 주소(16bit), 입력받은값	
	// printf("%d %d", scores, scores[2][2]);									// 주소(정수), 입력받은값
	// printf("%d %d", sizeof(scores), sizeof(scores[3]));						// 80, 4
} */


/*
* 2차원 배열
void main() {
	int scores[4][5] = { 0, };

	scanf("%d %d", scores, scores[1]+1);
	printf("%d %d", *scores[0], scores[1][1]);
} */

/*
* 3차원 배열
void main() {
	
	int scores[4][5][5] = {0,};

	scanf("%d %d", scores + 2, &scores[1][2][2]);
	printf("%p %p %p\n", scores, scores[0], scores[0][0]);
	printf("%p %p %p", scores + 1, scores[0] + 1, scores[0][0] + 1);
} */

/*
void main() {

	int scores[4][5][5] = { 0, };

	printf("%d %d %d", sizeof(scores), sizeof(scores[0]), sizeof(scores[0][0]));
} */

/*
int main() {
	
	int data[ROW][COL];
	int i = 0, j = 0, k = 0;

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			data[i][j] = ++k;
		} 
	}

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%3d ", data[i][j]);
		}
		printf("\n");
	}

	printf("sizeof(data)       = %d\n", sizeof(data));
	printf("sizeof(data[0])    = %d\n", sizeof(data[0]));
	printf("sizeof(data[0][0]) = %d\n", sizeof(data[0][0]));
} */

/*
* 3차원 배열 값 넣기
void main() {

	int x[3][4][3] = { { 1, 2, 3 },{ 3, 5 },{ 3, } };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++){
			for (int k = 0; k < 3; k++) {
				printf("%d \n", x[i][j][k]);
			}
		}
	}
} */

/*
int main() {

	int data[][COL] = {
		{10, 20}, {30, 40}, {50, 60},
	};

	int row_size = sizeof(data) / sizeof(data[0]);
	int i, j;

	for (i = 0; i < row_size; i++) {
		for (j = 0; j < COL; j++) {
			printf("%3d ", data[i][j]);
		}
		printf("\n");
	}
} */

/*
void print_array(int* p, int size) {

	int i = 0;
	int sum = 0, cnt = 0;

	for (i = 0; i < size; i++) {
		if (p + i >= 12) {
			sum += p[i];
			cnt++;
		}
	}
	printf("%.2f\n", (double)(sum / cnt));
}

int main() {

	int data[] = { 12, 34, 51, 22, 91, 12, 15 };
	int key, size;

	size = sizeof(data) / sizeof(data[0]);

	printf("data = ");
	print_array(data, size);

	for (int i = 0; i < size; i++) {
		printf("%d ", data[i]);
	}

	printf("찾을 값(키)? ");
	scanf("%d", &key);

	for (int i = 0; i < size; i++) {
		if (data[i] == key) {
			printf("찾은 원소의 인덱스: %d\n", i);
		}
	}
} */

void print_array(int arr[], int size) {
	for (int i = 0; i < SIZE; i++) {
		printf("%d", arr[i]);
	}
}

int main() {
	
	int data[SIZE] = { 52,31,28,17,46 };
	int i, j, temp;
	int index_min;

	for (i = 0; i < SIZE - 1; i++) {
		index_min = i;
		for (j = i + 1; j < SIZE; j++) {
			if (data[index_min] > data[j]) {
				index_min = j;
			}
		}
		if (i != index_min) {
			temp = data[i];
			data[i] = data[index_min];
			data[index_min] = temp;
		}

		printf("i = %d일때 정렬 결과 : ", i);
		print_array(data, SIZE);
	}
}