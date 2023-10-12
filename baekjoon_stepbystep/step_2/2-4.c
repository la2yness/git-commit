// 첫 줄에는 정수 x가 주어진다. (−1000 ≤ x ≤ 1000; x ≠ 0)
// 다음 줄에는 정수 y가 주어진다. (−1000 ≤ y ≤ 1000; y ≠ 0)
// 점 (x, y)의 사분면 번호(1, 2, 3, 4 중 하나)를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)	{
	int x, y;

	scanf("%d%d", &x, &y);

	if(x > 0 && y > 0)
		printf("1\n");
	else if(x < 0 && y > 0)
		printf("2\n");
	else if(x < 0 && y < 0)
		printf("3\n");
	else
		printf("4\n");

	return 0;
}
