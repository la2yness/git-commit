// 첫째 줄에 테스트 케이스의 개수 T(1 ≤ T ≤ 1000)가 주어진다.
// 각 테스트 케이스는 반복 횟수 R(1 ≤ R ≤ 8), 문자열 S(1 ≤ T ≤ 20)가 공백으로 구분되어 주어진다.
// 문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#include <string.h>

int main(void)	{
	int t, r;
	char s[21];
	
	scanf("%d", &t);

	for(int i = 0; i < t; i++)	{
		scanf("%d %s", &r, s);
	
		for(int j = 0; j < strlen(s); j++)	{
			for(int k = 0; k < r; k++)
				printf("%c", s[j]);
		}

		printf("\n");
	}

	return 0;
}

