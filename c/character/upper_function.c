// Using Character-Handling Functions
// Calling C’s toupper library function is a fast and portable way to convert case:
// ch = toupper(ch);
// toupper returns the upper-case version
// Programs that call toupper need to have the following #include directive at the top: #include <ctype.h>
// Other useful functions in ctype.h: isdigit, isalpha...
// Example: isalpha(ch) returns nonzero if ch is an alphabet, 0 otherwise

#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	char uch;
	printf("Enter a message: ");
	ch = getchar();

	while (ch != '\n')
	{
		if (isalpha(ch))
			uch = toupper(ch);
		else
			uch = ch;
		printf("%c", uch);

		ch = getchar();
	}
	printf("\n");

	return 0;
}
