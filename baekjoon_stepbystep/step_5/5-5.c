// 첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.
// 입력으로 주어진 숫자 N개의 합을 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)	{
	int n, num[100], sum = 0;
	
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		scanf("%1d", &num[i]);
	
	for(int i = 0; i < n; i++)
		sum += num[i];

	printf("%d\n", sum);

	return 0;
}

