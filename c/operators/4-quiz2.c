// What is the output of the following code segment?
#include <stdio.h>
int main()
{
    int i, j;
    i = 8;
    j = 4;
    i *= j++;

    printf("%d %d\n", i, j); // i = 32, j = 5

    return 0;
}