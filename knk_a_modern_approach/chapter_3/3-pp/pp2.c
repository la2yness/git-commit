#include <stdio.h>

int main(void)
{
	int num, mm, dd, yyyy;
	float price;

	printf("Enter item number: ");
	scanf("%d", &num);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd ,&yyyy);

	printf("Item		Unit		Purchase\n");
	printf("	        Price           Date\n");
	printf("%-d		$%7.2f	%.2d/%.2d/%d\n", num, price, mm, dd, yyyy);

	return 0;
}
