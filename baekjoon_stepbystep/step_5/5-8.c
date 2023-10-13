// 첫 줄에 영어 대소문자와 공백으로 이루어진 문자열(길이는 1,000,000을 넘지 않는다.)이 주어진다.
// 단어는 공백 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다. 또한 문자열은 공백으로 시작하거나 끝날 수 있다.
// 문자열에 몇 개의 단어가 있는지 구하는 프로그램을 작성하시오.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)	{
	int cnt = 0;
	char search = ' ';
	char *c, *result;

	c = (char *)malloc(sizeof(char));

	scanf("%s", c);

	while(result != NULL)	{
		result = strchr(c, search);
		c = result;
		printf("%s", c);
		cnt++;
	}

	printf("%d\n", cnt);

	free(c);

	return 0;
}
	
