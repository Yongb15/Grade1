#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
int main() {

	char a;
	scanf(" %c", &a);					// " ", "\t", "\n" �� ��� ���⳪ ���� ��� ���� ������ �Է��ص� �� ó�� ���ڸ� ���
	printf("%c", a);
} */

/*
void main() {

	printf("%p ", "dkssudgktpdy");				// �ּҰ� ����.
	printf("%p  ", "dkssudgktpdy");				// �ּҰ� ����.

} */

/*
void main() {
	// ���ڿ��� �迭�̶� ����
	printf("%c ", *("dkssudgktpdy"));				// d ���
	printf("%c ", *("dkssudgktpdy" + 2));			// s ���

	printf("%c ", "dkssudgktpdy"[2]);				// s ��� (�迭ó�� �̿�)
	printf("%s ", &"dkssudgktpdy"[2]);				// �ּҰ�	// %s = �ּ�
} */

/*
int main() {
	char str1[20] = "kim";
	char str2[30];

	str2 = str1;									// ù ��° �ּҰ��� �����ϹǷ� �ȵ�
	strcpy(str2, str1);								// ���� �����ϴ� ���̹Ƿ� ����
} */

/*
void main() {
	// char str[80];									// �迭�� �����ϸ� o

	char* p = "sdkjsdjksd";

	// p = str;

	p[0] = 'a';										// �迭�� �ƴϹǷ� x

	// printf("%c", p[0]);
} */

/*
int main() 
{
	char str[64] = "this is test string for char pointer.";
	char* p = str;									// p�� str �迭�� ����Ų��.

	while (1)
	{
		if (islower(*p))							// p[0]�� �ҹ������� �˻��Ѵ�.	// *p�� ����
		{
			*p = toupper(*p);						// p[0]�� �빮�ڷ� ����			// *p�� ����
		}
		p = strchr(p, ' ');							// str�� ������ ã�� �� �ּҸ� p�� ����
		if (p == NULL)
		{
			break;
		}
		p++;
	}
	puts(str);										// puts() = ���� ���ڿ��� ���
} */

/*
int main()
{
	printf("%d", 2500 << 3);
} */

/*
>> : ���������� ����Ʈ
ex) 10 >> 1 : 0000 0000 0000 0000 0000 0000 0000 0101 = 5
ex) 2500 >> 3 : 312
x >> n = x / 2 ^ n		// �Ҽ����� ����

<< : �������� ����Ʈ
ex) 10 << 1 : 0000 0000 0000 0000 0000 0000 0001 0100 = 20
ex) 2500 >> 3 = 20000
x << n = x * 2 ^ n		// �Ҽ����� ����
�Ǽ����� ����Ʈ x
�������� �������� ����Ʈ O
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
	printf("���� ������ ����: %d\n", count_space(str));
}
*/

/*
int main()
{
	char str[80];
	int i;

	for (i = 0; i < 80; i++)
	{
		str[i] = getchar();									// �ѱ��ھ� ����
		if (str[i] == ' ')
		{
			break;
		}
	}
	str[i] = '\0';											// ������ ��
	printf("%s ", str);
} */

/*
int main()
{
	int age;
	char grade;

	// scanf("%d%c", &age, &grade);
	// printf("���̴� %d, ������ %c�Դϴ�.\n", age, grade);
	/* ��� ���
	120
	���̴� 120, ������
	�Դϴ�.*/
	/*
	scanf("%d %c", &age, &grade);
	getchar();													// �� ���ڸ� �޾� ���ֱ�

	printf("���̴� %d, ������ %c�Դϴ�.\n", age, grade);

	// for������ ���� �� getchar�� ���� Ȧ�� ���ڸ� ����.


} */

/*
int main()
{
	int age;
	char grade[80];
	while (1)
	{
		gets(grade);			// ���� ���������
		puts(grade);
	}
} */

/*
int main()
{
	char str[80] = "20231018Hong";
	char name[10];
	int year, month, day;
	

	sscanf(str, "%4d%2d%2d%s", &year, &month, &day, name);							// sscanf() = ���ڿ��� �Է¹���, ���ڿ��� ��������
	// printf("�̸� : %s, ������ %d�� %d�� %d�� �Դϴ�!", name, year, month, day);		// sprintf() = ������ �Ǽ��� ���ڿ��� ��ȯ
	sprintf(str, "�̸� [%s], ������ %d�� %d�� %d�� �Դϴ�!", name, year, month, day);
	puts(str);
} */

/*
void main() 
{
	char str[5][30] = {"wonder", "me before you", "the hunger games", "twilight", "harry potter"};

	printf("%c ", str[1][3]);												// b ���
	printf("%c ", *(str[1] + 3));											// b ���
	printf("%s ", str[1] + 3);												// before you ���
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

	puts("<< ���� �� >>");

	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", books[i]);
	}
}