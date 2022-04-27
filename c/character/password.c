#include <stdio.h>

// check if an input is a valid password: alphabet or digit, 8 or more characters
int main()
{
	char ch;
	int is_valid = 1;
	int count = 0;

	ch = getchar();

	while (ch != '\n')
	{
		if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')))
			is_valid = 0;
		count++;
		ch = getchar();
	}
	// check 8 or more characters
	if (count < 8)
		is_valid = 0;

	if (is_valid)
		printf("Valid password.");
	else
		printf("Invalid password.");

	return 0;
}
