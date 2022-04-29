#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *concat(const char *s1, const char *s2);
int main()
{
    char *p;
    p = concat("abc", "def");
    printf("%s\n", p);

    return 0;
}

char *concat(const char *s1, const char *s2)
{
    char *result;

    result = malloc(strlen(s1) + strlen(s2) + 1);
    if (result == NULL)
    {
        printf("Error: malloc failed in concat.\n");
        exit(EXIT_FAILURE);
    }

    strcpy(result, s1);
    strcat(result, s2);

    return result;
}

// Functions such as concat that dynamically allocate storage mst be used with care.
// When the string that concat returns is no longer needed,
// we'll want to call the free function to release the space that the string occupies.
// If we don't, the profram may eventually run out of memory.