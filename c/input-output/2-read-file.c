// Reading a Text File
// fgets
// To read a line of text from a file, use function fgets()
// What we know about fgets: use fgets with standard input:
char sentence[SENT_LEN + 1];

printf("Enter a sentence: ");
fgets(sentence, SENT_LEN + 1, stdin);
// safer than gets() because you can specify the maximum number of chars to read.

// Reading a File Example
#include <stdio.h>
#define MAX_LEN 1000

int main()
{
    char str[MAX_LEN + 1];
    FILE *pFile;

    pFile = fopen("test.txt", "r");

    if (pFile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    while (fgets(str, MAX_LEN + 1, pFile) != NULL)
    {
        printf("%s", str);
    }
    // need to close the file before existing the program
    return 0;
}
