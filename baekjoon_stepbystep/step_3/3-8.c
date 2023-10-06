// 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
// 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다.
// "Case #x: A + B = C" 형식으로 출력한다. x는 테스트 케이스 번호이고 1부터 시작한다.

#include <stdio.h>

int main(void)
{
	int t;

	scanf("%d", &t);

	int a[t], b[t];

	for(int i = 0; i < t; i++)
		scanf("%d%d", &a[i], &b[i]);

	for(int i = 0; i < t; i++)
		printf("Case #%d: %d + %d = %d\n", i + 1, a[i], b[i], a[i] + b[i]);

	return 0;
}
