#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* �ݺ��� */
int main_loop() {
	// for�� for(�ʱⰪ, ���ǽ�, ������) {}
	/*for (int i = 1; i <= 10; i++) {
		printf("Hello world %d\n", i);
	}*/

	// while�� while(����) {} �ʱⰪ�� ���� �������� while�� �ȿ�
	/*int i = 1;
	while (i <= 10) {
		printf("Hello world\n");
		i++;
	}*/

	// do {} while (����)
	/*int i = 1;
	do {
		printf("Hello world\n");
		i++;
	} while (i <= 10);*/
	
	// 2�� �ݺ���
	/*for (int i = 1; i <= 3; i++) {
		printf("ù ��° �ݺ��� : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("      �� ��° �ݺ��� : %d\n", j);
		}
	}*/

	// ������
	/*for (int i = 2; i <= 9; i++) {
		printf("%d�� ���\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}*/

	// �����
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

	// �����2
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

	// �Ƕ�̵� �ױ�!

	/*int floor = 0;

	printf("�� ������ �װڽ��ϱ�? ");
	scanf("%d���̿�!", &floor);

	for (int i = 0; i < floor; i++) {				// �Է¹��� ���� ����
		for (int j = i; j < floor - 1; j++) {		// ��ĭ�� �Է¹��� �� - 1�� �ϸ� ������ �ڸ��� �� ����
			printf(" ");
		}
		for (int k = 0; k < (i * 2) + 1; k++) {		// (i * 2) + 1�� �� ������ i�� 0�� ���͵� 1ĭ�� ���� �� ����
			printf("*");
		}
		printf("\n");
	}*/

	// ���Ƕ�̵� �ױ�								// �ٽ� ����

	/*int floor = 0;

	printf("�� ������ �װڽ��ϱ�? ");
	scanf("%d���̿�!", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = 0; k < (floor - i) * 2 - 1; k++) {	// (floor - i) * 2 - 1�� ������ Ȧ���� ����� ���ؼ��̴�.
			printf("*");
		}
		printf("\n");
	}*/
}