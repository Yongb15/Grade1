#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double line(int x1, int x2, int y1, int y2);

int main()
{
	int x1, x2, y1, y2;
	double l;

	printf("직선의 시작점 좌표? ");
	scanf("%d %d", &x1, &y1);
	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &x2, &y2);

	l = line(x1, x2, y1, y2);

	printf("(%d, %d)~(%d, %d) 직선의 길이: %f", x1, y1, x2, y2, l);
}

double line(int x1, int x2, int y1, int y2)
{
	int dx, dy;
	double l;

	dx = x2 - x1;
	dy = y2 - y1;

	l = sqrt((dx * dx) + (dy * dy));

	return l;
}
