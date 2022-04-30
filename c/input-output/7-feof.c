// Checking for End of File
int feof(FILE *pFile);

// Returns non-zero value (true) when you have attempted to read beyond the end of the file.
// Returns 0 (false) when end of file has not been reached.

// Use feof to check after a read operation and before processing the input data.
// ferror is similar: returns a nonzero value when a read error occurred during input.

while (!feof(myFile) && !ferror(myFile))
{
    /* Read next number from file*/
    if (fscanf(myFile, "%d", &num) == 1)
        printf("%d\n", num);
}

while (!feof(myFile) && !ferror(myFile))
{
    /* Read a string and two numbers */
    if (fscanf(myFile, "%s%d%d", str, &num1, &num2) == 3)
        printf("%s\t%d\t%d\n", str, num1, num2);
}
