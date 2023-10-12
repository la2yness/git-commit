#include <stdio.h>

int main(void)	{
	int a, b;

	printf("Enter a two-digit number: ");
	scanf("%d", &a);

	b = a % 10;
	a = a / 10;

	printf("The reversal is: %d%d\n", b, a);

	return 0;
}
