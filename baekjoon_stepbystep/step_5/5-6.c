// 첫째 줄에 단어 S(길이는 100을 넘지 않으며, 알파벳 소문자)가 주어진다.
// 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#include <string.h>

int main(void)	{
	int a;
	char s[101], search, *place;

	scanf("%s", s);

	for(int i = 97; i <= 122; i++)	{
		search = i;
		place = strchr(s, search);
				
		if(place == NULL)
			printf("-1 ");
		else
			printf("%d ", &place);
	}
}
