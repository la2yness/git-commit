// 두 정수 A와 B(-10000 ≤ A, B ≤ 10000)가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.
// A가 B보다 큰 경우에는 '>'를 출력한다.
// A가 B보다 작은 경우에는 '<'를 출력한다.
// A와 B가 같은 경우에는 '=='를 출력한다.

#include <stdio.h>

int main(void)	{
	int A, B;

	scanf("%d%d", &A, &B);

	if(A > B)
		printf(">\n");
	else if(A < B)
		printf("<\n");
	else
		printf("==\n");

	return 0;
}
