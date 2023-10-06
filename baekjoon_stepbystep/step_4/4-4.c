// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
// 첫째 줄부터 아홉 번째 줄까지 한 줄에 하나의 자연수가 주어진다.
// 첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 몇 번째 수인지를 출력한다.

#include <stdio.h>

int main(void)
{
	int max = 0, n, a[9];

	for(int i = 0; i < 9; i++)	{
		scanf("%d", &a[i]);

		if(max < a[i])	{
			max = a[i];
			n = i + 1;
		}
	}
	
	printf("%d\n%d\n", max, n);

	return 0;
}
