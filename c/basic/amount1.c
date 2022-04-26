// Write a program that computes the total amount of money in cents
// given numbers of quarters, dimes, and nickels, and pennies.
// Suppose we have: 6 quarters, 10 dimes, 3 nickels, and 2 pennies

#include <stdio.h>
int main(void)
{

	int num_quarters = 6;
	int num_dimes = 10;
	int num_nickels = 3;
	int num_pennies = 2;

	int amount = num_quarters * 25 + num_dimes * 10 + num_nickels * 5 + num_pennies;

	printf("the total amount is %d cents.\n", amount);
	return 0;
}
