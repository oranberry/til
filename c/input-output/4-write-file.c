// Writing a File
// Use “w” as the mode in fopen() to write

// Creates file if it does not exist.
// Overwrites old version if file does exist.

// Use “a” to append to an existing file.
// Creates file if it does not exist.

// What does the following program open “source.txt” to do?
#include <stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("source.txt", "w");
    return 0;
}
// For writing and creating a new file "source.txt" if "source.txt" doesn’t exist

#include <stdio.h>
#define MAX_LEN 1000

int main()
{
    FILE *pFile;

    pFile = fopen("foo.txt", "w");

    if (pFile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    fputs("Humpty Dumpty sat on a wall\n", pFile);
    fputs("Humpty Dumpty had a great fall\n", pFile);

    fclose(pFile);
    printf("File foo.txt written\n");
    return 0;
}
