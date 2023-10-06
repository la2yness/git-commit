// N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
// 첫째 줄에 정수의 개수 N이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다.

#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);
	int a[n];

	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int max = a[0];
	int min = a[0];

	for(int j = 0; j < n; j++)	{
		if(max < a[j])
			max = a[j];
		if(min > a[j])
			min = a[j];
	}
	
	printf("%d %d\n", min, max);

	return 0;
}
