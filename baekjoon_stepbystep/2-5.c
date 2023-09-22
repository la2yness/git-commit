/* 첫째 줄에 두 정수 H와 M이 주어진다. (0 ≤ H ≤ 23, 0 ≤ M ≤ 59)
 * 입력 시간은 24시간 표현을 사용한다.
 * 시간을 나타낼 때, 불필요한 0은 사용하지 않는다.
 * 첫째 줄에 45분 일찍 알람 설정하기를 사용할 때, 설정해야 하는 알람 시간을 출력한다.
 */

#include <stdio.h>

int main(void)
{
	int H, M;

	scanf("%d %d", &H, &M);

	if(M >= 45)
		M -= 45;
	else {
		M += 15;
		if(H > 0)
          		H--;
        	else
                	H += 23;
	}

	printf("%d %d\n", H, M);
	
	return 0;
}




