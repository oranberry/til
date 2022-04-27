// 💫 The for statement
// The for statement is ideal for loops that have a “counting” variable,
// but it’s versatile enough to be used for other kinds of loops as well.
#include <stdio.h>
int main()
{
    int i;
    for (i = 10; i > 0; i--)
        printf("i is %d\n", i);

    // is equivalent to
    i = 10;
    while (i > 0)
    {
        printf("i is %d\n", i);
        i--;
    }

    return 0;
}