// Write a program that asks the user to enter a value for x and then displays the value of the following polynomial

#include <stdio.h>

int main(void)
{
	int x, answer;

	printf("enter a value for x: ");
	scanf("%d", &x);

	answer = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x -6;

	printf("Answer: %d\n", answer);

	return 0;
}
