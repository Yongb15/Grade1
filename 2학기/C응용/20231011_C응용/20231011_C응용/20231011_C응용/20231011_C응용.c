#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ary[2] = 50; && *(arr+2) = 50;
// p++ ����, arr++�� x(arr�� �迭���� ��� ù�� ° �ּҸ� ����Ű�Ƿ� �ٲ�� �ȵ�!)

/*
int main() {
	char a = 'abcd';									// �������� d�� ��
	int b = (20, 34, 45, 44, 99);						// �������� 99�� ��
	printf("%c %d %d", a, a, b);						// d 100 99 ���
}
*/

/*
void main() {
	char a[] = "apple";

	printf("%d \n", sizeof(a));							// 6 ���, apple + NULL��

	char b[5] = "apple";							
	printf("%s \n", b);									// apple �ڿ� �����Ⱚ�� ��.
	printf("%s \n", b+2);									// ple �ڿ� ������ ��
	printf("%c \n", *(b + 2));							// p ���
}*/

/*
void main() {

	char a[] = "apple";

	printf("���ڿ� ���� %s", "orange"+2);				// ange ���	// �޸𸮿� �迭�� �Ҵ�
	printf("���ڿ� ���� %c", *("orange" + 3));			// n ���
}*/

/* ���� 9-2
int main() {

	char str1[10] = "abc";
	char str2[10] = "very long string";
	char str3[] = "abc";
	char str4[10] = "";
	int i;

	str1[0] = 'A';
	printf("str1 = ");
	for (i = 0; str1[i] != '\0'; i++) {
		printf("%c", *(str1+i));
	}
	printf("\n");

	printf("str2 = %s\n", str2);
	printf(str3);
	printf("\nstr4 = %s\n", str4);
}*/

/* ���� �빮�� ��ȯ
int main() {
	printf("%c", toupper('a'));
} */

/* ���ڿ��� ������ ��ȯ
int main() {
	char str[20] = "12500";
	printf("%d", atoi(str));						// ���ڿ��� atoi(str)�� �̿��Ͽ� ������ ��ȯ
}*/

/* ����
int main() {
	char a, b, c;

	scanf(" %c %c", &a, &b);									// ������ �ְų� \t�� \n�� ������ ������ ������ 
	printf("%c %c \n", a, b);
	scanf("\t%c\n%c", &a, &b);									// ������ �ְų� \t�� \n�� ������ ������ ������
	printf("%c %c \n", a, b);
}*/

/*
int main() {
	char str[100], stt[20]="kim";
	
	// scanf("%s %s", str, stt);
	gets(str);											// gets()�� ����ϸ� enter ���� ������ �ϳ��� ���ڿ��� ��� (scanf�� ���� �Է������� enter�� ���� ������ �Է� ����)
	// printf("%s %s \n", str, stt);
	puts(str);													// �ڵ� �ٹٲ� (printf�� ���� ��������� �ڵ� �ٹٲ��� ��)

} */

/*
int main() {
	char str[100];

	gets(str);											

	for (int i = 0; i <= strlen(str) - 1; i++) {
		putchar(*(str+i));
	}
} */

/*
int main() {
	char str[100], stt[100];

	gets(str);
	strcpy(stt, str);												// str�� ���ڿ��� stt�� �ּҰ� ����� (�ڿ� ���� ������)

	for (int i = 0; i <= strlen(str) - 1; i++) {					// ���� �ڵ�� �����ϰ� �ۿ�
		putchar(*(stt + i));
	}
} */

/*
int main() {
	char str[100], stt[100];

	gets(str);
	strncpy(stt, str, 10);

	*(stt+10) = '\0';

	for (int i = 0; i <= strlen(stt) - 1; i++) {
		putchar(*(stt + i));
	}
} */

/*
int main() {
	char str1[10] = "";
	char str2[10] = "";
	char temp[10];

	printf("2���� ���ڿ�? ");
	scanf("%s %s", str1, str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);

	printf("str1 = %s, str2 = %s\n", str1, str2);
} */

/*
int main() {
	// char str[100] = "abckjsg", stt[100] = "gabckjsgklsjgoivmjsk";		// g�� �� ŭ g(�ƽ�Ű�ڵ� : 103), a(�ƽ�Ű�ڵ� : 97) �ϳ��� ��
	char str[100] = "abckjsg", stt[100] = "abckjsgklsjgoivmjsk";		

	printf("%d ", strcmp(str, stt));								// 1�� ���
	printf("%d ", strncmp(str, stt, 5));
} */

/*
int main() {
	char sentence[100] = "";
	char word[20];

	do {
		printf("�ܾ�? ");
		scanf("%s", word);

		*(word + 2) = '\0';
		// strncat(sentence, word, 2);

		strcat(sentence, word);
		strcat(sentence, " ");
	} while (strcmp(word, ".") != 0);

	printf("%s\n", sentence);
} */

/*
int main() {

	char filename[] = "readme.txt";
	char* p = NULL;

	p = strchr(filename, '.');
	
	if (p != NULL) {
		printf("file extension: %s\n", p + 1);
	}

	p = strstr(filename, "txt");

	if (p != NULL) {
		printf("file type: TEXT file \n");
	}
} */

/*
int main() {
	char phone[] = "010-1234-5678";
	char* p = NULL;

	p = strtok(phone, "-");
	printf("mobile : %s\n", p);

	p = strtok(NULL, "-");
	printf("prefex : %s\n", p);
	p = strtok(NULL, "-");
	printf("line no.: %s\n", p);
} */

int main() {
	char phone[] = "0-1-0-1-2-3-4-5-6-7-80909 - 9099";
	char* p = NULL;

	int len = strlen(phone);

	p = strtok(phone, "-");
	printf("mobile : %s\n", p);

	for (int i = 0; i < len-1; i++) {
		if (p == NULL) {
			break;
		}
			p = strtok(NULL, "-");
			printf("%d��° : %s\n", i, p);
	}

}

