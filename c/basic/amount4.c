// Modify your previous program
// with format specifiers so that the output is in dollars (1 dollar = 100 cents)
// with two decimal digits. For example, $1.23

#include <stdio.h>
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

int main(void)
{
	int num_quarters = 0;
	int num_dimes = 0;
	int num_nickels = 0;
	int num_pennies = 0;

	printf("please enter the number of quaters:");
	scanf("%d", &num_quarters);

	printf("please enter the number of dimes:");
	scanf("%d", &num_dimes);

	printf("please enter the number of nickels:");
	scanf("%d", &num_nickels);

	printf("please enter the number of pennies:");
	scanf("%d", &num_pennies);

	int amount = num_quarters * QUARTER + num_dimes * DIME + num_nickels * NICKEL + num_pennies * PENNY;
	printf("the total amount is %d cents.\n", amount);

	// 1 dollar = 100 cents
	double dollarAmount = amount / 100.0;
	printf("the total amount is %.2f dollars.\n", dollarAmount);

	return 0;
}
