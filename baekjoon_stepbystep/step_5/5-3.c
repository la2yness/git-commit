// 입력의 첫 줄에는 테스트 케이스의 개수 T(1 ≤ T ≤ 10)가 주어진다.
// 테스트 케이스는 한 줄에 하나의 문자열(알파벳 A~Z 대문자, 사이에 공백은 없음, 최대 길이는 1000)이 주어진다.
// 각 테스트 케이스에 대해서 주어진 문자열의 첫 글자와 마지막 글자를 연속하여 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#include <string.h>

int main(void)	{
	int t, i;
	char str[10][1000];

	scanf("%d", &t);

	for(i = 0; i < t; i++)
		scanf("%s", str[i]);
	
	for(i = 0; i < t; i++)
		printf("%c%c\n", str[i][0], str[i][strlen(str[i]) - 1]);
}
	
