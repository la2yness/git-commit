// 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.
// 첫째 줄에 정수의 개수 N이 주어진다. 둘째 줄에는 정수가 공백으로 구분 되어져 있다. 셋째 줄에는 찾으려고 하는 정수 v가 주어진다.

#include <stdio.h>

int main(void)
{
	int n, v;
	int count = 0;

	scanf("%d", &n);
	int a[n];

	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	scanf("%d", &v);

	for(int j = 0; j < n; j++)	{
		if(a[j] == v)
			count++;
	}

	printf("%d\n", count);

	return 0;
}
