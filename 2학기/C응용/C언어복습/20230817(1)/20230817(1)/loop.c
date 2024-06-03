#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 반복문 */
int main_loop() {
	// for문 for(초기값, 조건식, 증감식) {}
	/*for (int i = 1; i <= 10; i++) {
		printf("Hello world %d\n", i);
	}*/

	// while문 while(조건) {} 초기값은 위에 증감식은 while문 안에
	/*int i = 1;
	while (i <= 10) {
		printf("Hello world\n");
		i++;
	}*/

	// do {} while (조건)
	/*int i = 1;
	do {
		printf("Hello world\n");
		i++;
	} while (i <= 10);*/
	
	// 2중 반복문
	/*for (int i = 1; i <= 3; i++) {
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("      두 번째 반복문 : %d\n", j);
		}
	}*/

	// 구구단
	/*for (int i = 2; i <= 9; i++) {
		printf("%d단 계산\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}*/

	// 별찍기
	/*
	*
	**
	***
	****
	*****
	*/
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	// 별찍기2
	/*
	SSSS*
	SSS**
	SS***
	S****
	*****
    */
	/*for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf("S");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}*/

	// 피라미드 쌓기!

	/*int floor = 0;

	printf("몇 층까지 쌓겠습니까? ");
	scanf("%d층이요!", &floor);

	for (int i = 0; i < floor; i++) {				// 입력받은 층수 생성
		for (int j = i; j < floor - 1; j++) {		// 빈칸은 입력받은 수 - 1로 하면 나머지 자리에 별 가능
			printf(" ");
		}
		for (int k = 0; k < (i * 2) + 1; k++) {		// (i * 2) + 1을 한 이유는 i에 0이 들어와도 1칸을 찍을 수 있음
			printf("*");
		}
		printf("\n");
	}*/

	// 역피라미드 쌓기								// 다시 복습

	/*int floor = 0;

	printf("몇 층까지 쌓겠습니까? ");
	scanf("%d층이요!", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = 0; k < (floor - i) * 2 - 1; k++) {	// (floor - i) * 2 - 1한 이유는 홀수를 만들기 위해서이다.
			printf("*");
		}
		printf("\n");
	}*/
}