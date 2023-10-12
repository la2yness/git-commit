// 연도(1 <= y <= 4000)가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.
// 윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.

#include <stdio.h>

int main(void)	{
	int y;

	scanf("%d", &y);

	if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		printf("1\n");
	else
		printf("0\n");

	return 0;
}
