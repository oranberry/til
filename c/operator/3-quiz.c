#include <stdio.h>
int main()
{
    int i, j, k;

    i = 1;
    j = 2;
    k = ++i + j++;

    // What is the value of k?
    printf("%d\n", k); // i = 2, j = 3, k = 4

    return 0;
}
