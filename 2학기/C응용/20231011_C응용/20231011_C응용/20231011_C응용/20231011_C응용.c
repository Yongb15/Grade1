#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ary[2] = 50; && *(arr+2) = 50;
// p++ 가능, arr++은 x(arr이 배열명일 경우 첫번 째 주소를 가르키므로 바뀌면 안됨!)

/*
int main() {
	char a = 'abcd';									// 최종값인 d가 들어감
	int b = (20, 34, 45, 44, 99);						// 최종값인 99가 들어감
	printf("%c %d %d", a, a, b);						// d 100 99 출력
}
*/

/*
void main() {
	char a[] = "apple";

	printf("%d \n", sizeof(a));							// 6 출력, apple + NULL값

	char b[5] = "apple";							
	printf("%s \n", b);									// apple 뒤에 쓰레기값이 들어감.
	printf("%s \n", b+2);									// ple 뒤에 쓰레기 값
	printf("%c \n", *(b + 2));							// p 출력
}*/

/*
void main() {

	char a[] = "apple";

	printf("문자열 저장 %s", "orange"+2);				// ange 출력	// 메모리에 배열로 할당
	printf("문자열 저장 %c", *("orange" + 3));			// n 출력
}*/

/* 예제 9-2
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

/* 문자 대문자 변환
int main() {
	printf("%c", toupper('a'));
} */

/* 문자열을 정수로 변환
int main() {
	char str[20] = "12500";
	printf("%d", atoi(str));						// 문자열은 atoi(str)을 이용하여 정수로 변환
}*/

/* 공백
int main() {
	char a, b, c;

	scanf(" %c %c", &a, &b);									// 공백을 넣거나 \t나 \n을 넣으면 공백을 무시함 
	printf("%c %c \n", a, b);
	scanf("\t%c\n%c", &a, &b);									// 공백을 넣거나 \t나 \n을 넣으면 공백을 무시함
	printf("%c %c \n", a, b);
}*/

/*
int main() {
	char str[100], stt[20]="kim";
	
	// scanf("%s %s", str, stt);
	gets(str);											// gets()를 사용하면 enter 나올 때까지 하나의 문자열로 취급 (scanf와 같이 입력이지만 enter가 나올 때까지 입력 가능)
	// printf("%s %s \n", str, stt);
	puts(str);													// 자동 줄바꿈 (printf와 같이 출력이지만 자동 줄바꿈이 됨)

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
	strcpy(stt, str);												// str의 문자열이 stt로 주소가 복사됨 (뒤에 것을 앞으로)

	for (int i = 0; i <= strlen(str) - 1; i++) {					// 위의 코드와 동일하게 작용
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

	printf("2개의 문자열? ");
	scanf("%s %s", str1, str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);

	printf("str1 = %s, str2 = %s\n", str1, str2);
} */

/*
int main() {
	// char str[100] = "abckjsg", stt[100] = "gabckjsgklsjgoivmjsk";		// g가 더 큼 g(아스키코드 : 103), a(아스키코드 : 97) 하나씩 비교
	char str[100] = "abckjsg", stt[100] = "abckjsgklsjgoivmjsk";		

	printf("%d ", strcmp(str, stt));								// 1이 출력
	printf("%d ", strncmp(str, stt, 5));
} */

/*
int main() {
	char sentence[100] = "";
	char word[20];

	do {
		printf("단어? ");
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
			printf("%d번째 : %s\n", i, p);
	}

}

