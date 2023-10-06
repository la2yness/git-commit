// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
// 하지만, 오른쪽을 기준으로 정렬한 별을 출력하시오

#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	for(int i = 1; i <= n; i++)	{
		for(int j = i; j < n; j++)
                	printf(" ");

        	for(int k = n - i; k < n; k++)
			printf("*");

		printf("\n");
	}

	return 0;
}
