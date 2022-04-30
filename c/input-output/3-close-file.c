// Closing a File
// The fclose function allows a program to close a file that it’s no longer using.
// The argument to fclose must be a file pointer obtained from a call of fopen.
fclose()
// Writes any buffered data to the file.
// Frees resources used by the file.

// The outline of a program that opens a file for reading:
#include <stdio.h>
#include <stdlib.h>
#define FILE_NAME "example.txt"

    int main(void)
{
    FILE *fp;
    fp = fopen(FILE_NAME, "r");

    if (fp == NULL)
    {
        printf("Can't open %s\n", FILE_NAME);
        return 1;
    }

    fclose(fp);
    return 0;
}

// fclose returns zero if the file was closed successfully.
// Otherwise, it returns the error code EOF
// EOF is a symbolic constant for an integer value defined in <stdio.h>
// EOF is usually  -1   (But don’t assume this value.  Use the symbol EOF.)
