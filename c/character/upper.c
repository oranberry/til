// Write a program that displays the upper-case version of a message entered by the user.
// Use getchar().
// The white space and punctuation should not be changed.

#include <stdio.h>

int main()
{
	char ch;
	char uch;
	printf("Enter a message: ");
	ch = getchar();

	while (ch != '\n')
	{
		if (ch >= 'a' && ch <= 'z')
			uch = ch - 'a' + 'A';
		else
			uch = ch;
		printf("%c", uch);

		ch = getchar();
	}
	printf("\n");

	return 0;
}
