// Write a program that asks the user to enter a value for x and then displays the value of the following polynomial
// Modify so that the polynomial is evaluated using a following fomula

#include <stdio.h>

int main(void)
{
	int x, answer;

	printf("enter a value for x: ");
	scanf("%d", &x);

	answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;;

	printf("Answer: %d\n", answer);

	return 0;
}
