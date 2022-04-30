// File Positioning
// Every stream has an associated file position.
// When a file is opened, the file position is set at the beginning of the file.
// In “append” mode, the initial file position may be at the beginning or end, depending on the implementation.

// When a read or write operation is performed,
// the file position advances automatically, providing sequential access to data.

// For example, fgets function reads a partial line due to lack of space in the destination array.
// The next call to fgets will continue reading from the same line at the point where the previous call stopped

// When a read or write operation is performed,
// the file position advances automatically, providing sequential access to data.
// It can not read the same bytes again unless you explicitly seek backwards
// into the stream with rewind, fseek, or fsetpos functions.

// The rewind function sets the file position at the beginning.
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
        printf("%s", str);

    rewind(pFile);
    while (fgets(str, MAX_LEN + 1, pFile) != NULL)
        printf("%s", str);
    fclose(pFile);
    return 0;
}
