// Write a program that display the printable characters
// in the ASCII character set together with their integer values, separated by one white space.

#include <stdio.h>

int main()
{
	char c;
	for (c = 32; c <= 126; c++)
		printf("%c %d\n", c, c);

	return 0;
}
