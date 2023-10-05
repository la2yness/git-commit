// Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments

#include <stdio.h>

int main(void)
{
	float balance, amount, rate, payment;

	printf("Enter amount of loan: ");
	scanf("%f", &amount);

	printf("Enter interest rate: ");
        scanf("%f", &rate);

	printf("Enter monthly payment: ");
        scanf("%f", &payment);

	rate = rate / 12 / 100;

	amount += amount * rate;
	amount -= payment;
	printf("Balance remaining after first payment: $%.2f\n", amount);

	amount += amount * rate;
	amount -= payment;
	printf("Balance remaining after second payment: $%.2f\n", amount);

	amount += amount * rate;
        amount -= payment;
	printf("Balance remaining after third payment: $%.2f\n", amount);

	return 0;
}
