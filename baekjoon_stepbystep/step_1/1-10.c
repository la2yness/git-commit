// 1과 2 위치에 들어갈 세 자리 자연수가 주어질 때 3, 4, 5, 6 위치에 들어갈 값을 구하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)	{
	int a, b;

	scanf("%d%d", &a, &b);

	printf("%d\n%d\n%d\n%d\n", a * (b % 10), a * (b / 10 % 10), a * (b / 100), a * b);

	return  0;
}
