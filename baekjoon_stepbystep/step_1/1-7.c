// 첫째 줄에 아이디가 주어진다. 아이디는 알파벳 소문자로만 이루어져 있으며, 길이는 50자를 넘지 않는다.
// 준하의 놀람을 출력한다. 놀람은 아이디 뒤에 ??!를 붙여서 나타낸다.

#include <stdio.h>

int main(void)	{
	char id[50];

	scanf("%s", id);

	printf("%s\?\?!\n", id);

	return 0;
}
