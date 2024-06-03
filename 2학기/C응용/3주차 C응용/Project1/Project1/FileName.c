#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

/*
void print_array(int arr[], int size) {
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
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
} */

int main() {

	int data[5] = { 52,31,28,17,46 };
	int i, j, temp;

	for (j = 4; j > 0; j--) {
		for (i = 0; i < j; i++) {						
			if (data[i] > data[i + 1]) {
				temp = data[i];
				data[i] = data[i + 1];
				data[i + 1] = temp;
			}
		}
	}
	printf("%d %d %d %d %d\n", data[0], data[1], data[2], data[3], data[4]);
}