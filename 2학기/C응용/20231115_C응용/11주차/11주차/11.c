#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//#include "test.h"
#define kim 44

/*
int main(int argc, char** argv)
{
	printf("argc : %d", argc);
	for (int i = 0; i < argc; i++)
	{
		printf("%s ", *(argv + i));
	}
} */

/*
int main(int argc, char** argv)
{
	fprintf(stdout, "dlsnakzl xhrp");
} */

/*
int main(int argc, char** argv)
{
	double a = 2345.678;
	double b = 0.0002345678;
	
	printf("%e \n", a);
	printf("%e \n", b);
} */

/*
int main(int argc, char** argv)
{
	printf("% d\n", 789);
	printf("%d\n", 789);
	printf("%#x", 789);
} */

/*
int main(int argc, char** argv)
{
	int year, month, day;

	scanf("%4d/%2d/%2d", &year, &month, &day);
	printf("%d %d %d", year, month, day);
} */

/*
int main(int argc, char** argv)
{
	int a;
	char c;
	int b;

	b = scanf(" %d %c", &a, &c);
	printf("%d %c %d", a, c, b);
} */

/*
int main(int argc, char** argv)
{
	char str_num[100];
	
	scanf("%[0-9]", str_num);
	printf("str = %s\n", str_num);
} */

/*
int main(int argc, char** argv)
{
	int num;

	while (1) {
		if (scanf("%d", &num) == 1)
			break;
		printf("�߸� �Է��ϼ̽��ϴ�.\n");					// ���ѷ���
	}
} */

/*
int main(int argc, char** argv)
{
	int year, month, day;

	while (1)
	{
		if (scanf("%4d%2d%2d", &year, &month, &day) == 3)
			break;
		printf("yyyymmdd �������� �Է��ϼ���.\n");
		while(getchar() != '\n') {}
	}
	printf("�Էµ� ��¥: %4d-%02d-%02d\n", year, month, day);
} */

/*
int main(int argc, char** argv)
{
	FILE* fp;																		// FILE ������ ����

	fp = fopen("hong.txt", "w");		

	if (fp == NULL)																	
	{
		printf("���� ���� ����\n");													// ���
		exit(1);																	// 1�� ������ ����				0�� ����
	}
	printf("���� ���� ����");
} */

/*
int main(int argc, char** argv)
{
	FILE* fp;															// FILE ������ ����
	int ch;

	fp = fopen("kang.txt", "r");										// a ���� ��� �߰� w�� ���� �߰�

	if (fp == NULL)
	{
		printf("���� ���� ����\n");										// ���
		exit(1);														// 1�� ������ ����				0�� ����
	}
	printf("���� ���� ����\n");
	while ((ch = fgetc(fp)) != -1)
		fputc(ch, stdout);
	fclose(fp);
} */


int main(int argc, char** argv)
{
	char in_fname[128] = "";
	char out_fname[128] = "";
	FILE* fin = NULL;
	FILE* fout = NULL;
	char str[BUFSIZ];

	printf("���� �̸�? ");
	gets_s(in_fname, sizeof(in_fname));
	fin = fopen(in_fname, "r");

	if (fin == NULL)
	{
		printf("%s ���� ���� ����\n", in_fname);
		return 1;
	}
	
	strcpy(out_fname, in_fname);
	strcat(out_fname, ".bak");
	fout = fopen(out_fname, "w");

	if (fout == NULL)
	{
		printf("%s ���� ���� ����\n", out_fname);
		fclose(fin);
		return 1;
	}

	while (fgets(str, sizeof(str), fin) != NULL)
	{
		fputs(str, fout);
	}
	
	fclose(fin);
	fclose(fout);

	printf("���� ��� ����: %s�� ����߽��ϴ�.", out_fname);
} 