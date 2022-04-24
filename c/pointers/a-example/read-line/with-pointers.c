#include <stdio.h>
#define STR_LEN 50

int read_line(char *str, int n);

int main()
{
    int num_chars;
    char sen[STR_LEN+1];

    printf("Enter a sentence: ");
    num_chars = read_line(sen, STR_LEN);

    printf("You entered: %s, it has %d characters", sen, num_chars);
    return 0;
}

int read_line(char *str, int n)
{
    int ch; int i = 0;

    while ((ch = getchar()) != '\n'){  
        if (i < n){ 
            *str++= ch;
            i++;
        }
    }
    *str = '\0';   /* terminates string */
    return i;        /* number of characters stored */
}