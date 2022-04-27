#include <stdio.h>
int main()
{
    // What is the output of the code segment ?
    int i = 3;

    while (i > 0) // infinite loop
        ;
    {
        printf("%d ", i);
        --i;
    }

    // What is the output of the code segment ?
    i = 3;
    while (--i > 0)
        ;
    printf("%d ", i); // 0

    return 0;
}
