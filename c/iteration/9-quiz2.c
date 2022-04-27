// What is the value of sum after the following program fragment is executed?

#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 0; i < 3; i++)
    {
        if (i % 2 == 1)
            continue;
        sum += i;
    }
    printf("%d\n", sum); // 2
    return 0;
}