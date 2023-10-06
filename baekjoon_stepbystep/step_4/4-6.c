// 도현이는 바구니를 총 N개 가지고 있고, 바구니에는 1번부터 N번까지 번호가 매겨져 있다.
// 앞으로 M번 공을 바꾸려고 한다. 공을 바꿀 바구니 2개를 선택하고, 두 바구니에 들어있는 공을 서로 교환한다.
// 첫째 줄에 N과 M이 주어진다.
// 둘째 줄부터 M개의 줄에 걸쳐서 공을 교환할 방법이 주어진다. 각 방법은 두 정수 i j로 이루어져 있으며, i번 바구니와 j번 바구니에 들어있는 공을 교환한다는 뜻이다.
// M번 공을 바꾼 이후에 1번 바구니부터 N번 바구니에 들어있는 공의 번호를 공백으로 구분해 출력한다.

#include <stdio.h>

int main(void)
{
	int basket[100], n, m, i, j, buffer;

	scanf("%d%d", &n, &m);
	for(int a = 0; a < n; a++)
		basket[a] = a + 1;
	
	for(int b = 0; b < m; b++)	{
		scanf("%d%d", &i, &j);
		buffer = basket[i - 1];
	       	basket[i - 1] = basket[j - 1];
		basket[j - 1] = buffer;	
	}

	for(int c = 0; c < n; c++)
		printf("%d ", basket[c]);

	printf("\n");

	return 0;
}
