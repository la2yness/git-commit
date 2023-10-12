#include <stdio.h>

int main(void)	{
	int a, b, c;

	printf("Enter a three-digit number: ");
	scanf("%d", &a);

	c = a % 10;
	b = (a % 100 - c) / 10;
	a = a / 100;

	printf("The reversal is: %d%d%d\n", c, b, a);

	return 0;
}
