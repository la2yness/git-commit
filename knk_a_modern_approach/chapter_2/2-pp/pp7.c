// Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills

#include <stdio.h>

int main(void)
{
	int d20, d10, d5, d1, amount;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	d20 = amount / 20;
	d10 = amount % 20 / 10;
	d5 = amount % 10 / 5;
	d1 = amount % 5 / 1;

	printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n",
			d20, d10, d5, d1);

	return 0;
}
