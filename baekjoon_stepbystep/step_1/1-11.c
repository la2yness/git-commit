// 첫 번째 줄에 A, B, C(1 ≤ A, B, C ≤ 10^12)가 공백을 사이에 두고 주어진다.
// A+B+C의 값을 출력한다.

#include <stdio.h>

int main(void)	{
	long A, B, C;

	scanf("%ld%ld%ld", &A, &B, &C);

	printf("%ld\n", A + B + C);

	return 0;
}
