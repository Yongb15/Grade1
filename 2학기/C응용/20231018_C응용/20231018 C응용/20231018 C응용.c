#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
int main() {

	char a;
	scanf(" %c", &a);					// " ", "\t", "\n" 일 경우 띄어쓰기나 엔터 사용 가능 여러개 입력해도 맨 처음 문자만 출력
	printf("%c", a);
} */

/*
void main() {

	printf("%p ", "dkssudgktpdy");				// 주소가 같음.
	printf("%p  ", "dkssudgktpdy");				// 주소가 같음.

} */

/*
void main() {
	// 문자열은 배열이랑 같음
	printf("%c ", *("dkssudgktpdy"));				// d 출력
	printf("%c ", *("dkssudgktpdy" + 2));			// s 출력

	printf("%c ", "dkssudgktpdy"[2]);				// s 출력 (배열처럼 이용)
	printf("%s ", &"dkssudgktpdy"[2]);				// 주소값	// %s = 주소
} */

/*
int main() {
	char str1[20] = "kim";
	char str2[30];

	str2 = str1;									// 첫 번째 주소값을 복사하므로 안됨
	strcpy(str2, str1);								// 값을 복사하는 것이므로 가능
} */

/*
void main() {
	// char str[80];									// 배열을 생성하면 o

	char* p = "sdkjsdjksd";

	// p = str;

	p[0] = 'a';										// 배열이 아니므로 x

	// printf("%c", p[0]);
} */

/*
int main() 
{
	char str[64] = "this is test string for char pointer.";
	char* p = str;									// p는 str 배열을 가르킨다.

	while (1)
	{
		if (islower(*p))							// p[0]이 소문자인지 검사한다.	// *p랑 동일
		{
			*p = toupper(*p);						// p[0]을 대문자로 변경			// *p랑 동일
		}
		p = strchr(p, ' ');							// str중 공백을 찾아 그 주소를 p에 저장
		if (p == NULL)
		{
			break;
		}
		p++;
	}
	puts(str);										// puts() = 오직 문자열만 출력
} */

/*
int main()
{
	printf("%d", 2500 << 3);
} */

/*
>> : 오른쪽으로 쉬프트
ex) 10 >> 1 : 0000 0000 0000 0000 0000 0000 0000 0101 = 5
ex) 2500 >> 3 : 312
x >> n = x / 2 ^ n		// 소수점은 버림

<< : 왼쪽으로 쉬프트
ex) 10 << 1 : 0000 0000 0000 0000 0000 0000 0001 0100 = 20
ex) 2500 >> 3 = 20000
x << n = x * 2 ^ n		// 소수점은 버림
실수형은 쉬프트 x
문자형과 정수형은 쉬프트 O
*/

/*
int count_space(const char* s)
{
	int count = 0;

	while (s[0] != '\0')
	{
		if (isspace(s[0]))
		{
			count++;
		}
		s++;
	}

	return count;
}

int main()
{
	char str[64] = "this program\ttests const pointer to string.\n";

	puts(str);
	printf("공백 문자의 개수: %d\n", count_space(str));
}
*/

/*
int main()
{
	char str[80];
	int i;

	for (i = 0; i < 80; i++)
	{
		str[i] = getchar();									// 한글자씩 저장
		if (str[i] == ' ')
		{
			break;
		}
	}
	str[i] = '\0';											// 문자의 끝
	printf("%s ", str);
} */

/*
int main()
{
	int age;
	char grade;

	// scanf("%d%c", &age, &grade);
	// printf("나이는 %d, 학점은 %c입니다.\n", age, grade);
	/* 출력 결과
	120
	나이는 120, 학점은
	입니다.*/
	/*
	scanf("%d %c", &age, &grade);
	getchar();													// 한 글자를 받아 없애기

	printf("나이는 %d, 학점은 %c입니다.\n", age, grade);

	// for문으로 돌릴 때 getchar을 쓰면 홀수 문자만 받음.


} */

/*
int main()
{
	int age;
	char grade[80];
	while (1)
	{
		gets(grade);			// 엔터 나오기까지
		puts(grade);
	}
} */

/*
int main()
{
	char str[80] = "20231018Hong";
	char name[10];
	int year, month, day;
	

	sscanf(str, "%4d%2d%2d%s", &year, &month, &day, name);							// sscanf() = 문자열을 입력받음, 문자열을 마지막에
	// printf("이름 : %s, 오늘은 %d년 %d월 %d일 입니다!", name, year, month, day);		// sprintf() = 정수나 실수를 문자열로 변환
	sprintf(str, "이름 [%s], 오늘은 %d년 %d월 %d일 입니다!", name, year, month, day);
	puts(str);
} */

/*
void main() 
{
	char str[5][30] = {"wonder", "me before you", "the hunger games", "twilight", "harry potter"};

	printf("%c ", str[1][3]);												// b 출력
	printf("%c ", *(str[1] + 3));											// b 출력
	printf("%s ", str[1] + 3);												// before you 출력
} */

int main()
{
	char books[5][30] = {
		"wonder", "me before you", "the hunger games", "twilight", "harry potter"
	};
	char* p = books;
	
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", books[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		if (islower(books[i][0]))
		{
			books[i][0] = toupper(books[i][0]);
		}
	}

	puts("<< 변경 후 >>");

	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", books[i]);
	}
}