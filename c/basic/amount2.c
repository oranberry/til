// Modify your previous program so that the number of quarters, dimes, nickels, and pennies are entered by the user.

#include <stdio.h>

int main(void)
{

	int num_quarters = 0;
	int num_dimes = 0;
	int num_nickels = 0;
	int num_pennies = 0;

	printf("please enter the number of quarters:");
	scanf("%d", &num_quarters);

	printf("please enter the number of dimes:");
	scanf("%d", &num_dimes);

	printf("please enter the number of nickels:");
	scanf("%d", &num_nickels);

	printf("please enter the number of pennies:");
	scanf("%d", &num_pennies);

	int amount = num_quarters * 25 + num_dimes * 10 + num_nickels * 5 + num_pennies;

	printf("the total amount is %d cents.\n", amount);
	return 0;
}
