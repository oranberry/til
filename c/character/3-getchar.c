// 💫 Using getchar
// For single-character input and output, getchar and putchar are an alternative to scanf and printf.
// They are faster than scanf and printf.

// Each time getchar is called, it reads one character, which it returns:
ch = getchar();

// getchar returns an ✨ int value rather than a char value, so ch will often have type int.
// Like scanf, getchar doesn’t skip white-space characters as it reads.

// Consider the scanf loop that we used to skip the rest of an input line:
do
{
    scanf("%c", &ch);
} while (ch != '\n');

// Rewriting this loop using getchar :
do
{
    ch = getchar();
} while (ch != '\n');

// Moving the call of getchar into the controlling expression allows us to condense the loop:
while ((ch = getchar()) != '\n')
    ;

// getchar is useful in loops that skip characters as well as loops that search for characters.
// A statement that uses getchar to skip an indefinite number of blank characters:
while ((ch = getchar()) == ' ')
    ;
// When the loop terminates, ch will contain the first nonblank character that getchar encountered.