// 두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B, A%B를 출력하는 프로그램을 작성하시오
// 첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다

#include <stdio.h>

int main(void)	{
	int A, B;

	scanf("%d%d", &A, &B);
	printf("%d\n%d\n%d\n%d\n%d\n", A + B, A - B, A * B, A / B, A % B);

	return 0;
}
