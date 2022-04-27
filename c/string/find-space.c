// Accessing the Characters in a String

// Since strings are stored as arrays, we can use subscripting to access the characters in a string.
// A function that determines if there is a space in a string:

int find_space(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ')
            return 1;
    return 0;
}

// A version that uses pointer arithmetic instead of array subscripting :
int find_space(char *s)
{
    char *p;
    for (p = s; *p != '\0'; p++)
        if (*p == ' ')
            return 1;
    return 0;
}