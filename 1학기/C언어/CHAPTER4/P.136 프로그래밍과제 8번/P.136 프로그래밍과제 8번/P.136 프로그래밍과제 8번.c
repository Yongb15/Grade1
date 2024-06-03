#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// "시"는 정수라 3600으로 나누었을때 정수값은 "시"가 되는거고 "분"은 s값에서 3600 을 빼고 나누기 60을 한뒤 나오는 정수값이 나오고
// "초"는 3750을 60으로 나누고 나온 값에서 정수 곱하기 60을 한 후 나온 나머지 값이 "초"가 된다.
int main()
{
	int hour, minutes, second, s;

	printf("재생 시간(초)? ");
	scanf("%d", &s);

	hour = s / 3600;
	minutes = s % 3600 / 60;
	second = s % 60;
	

	printf("재생 시간은 %d시간 %d분 %d초 입니다.", hour, minutes, second);
}