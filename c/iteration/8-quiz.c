// What is the value of sum after the following program fragment is executed?
// Assume sum and i are int variables.
#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 0; i < 3; i++)
    {
        if (i % 2 == 1)
            break;
        sum += i;
    }
    printf("%d\n", sum); // 0
    return 0;
}
