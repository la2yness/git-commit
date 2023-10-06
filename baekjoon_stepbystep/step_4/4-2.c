// 정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
// 첫째 줄에 N과 X가 주어진다.
// 둘째 줄에 수열 A를 이루는 정수 N개가 주어진다.

#include <stdio.h>

int main(void)
{
        int n, x;

        scanf("%d%d", &n, &x);
	int a[n];

        for(int i = 0; i < n; i++)
                scanf("%d", &a[i]);

        for(int j = 0; j < n; j++)      {
                if(a[j] < x)
                        printf("%d ", a[j]);
        }
	
	printf("\n");

        return 0;
}
