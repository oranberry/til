// 💫 The while statement
// When a while statement is executed, the controlling expression is evaluated first.

// If its value is nonzero (true), the loop body is executed and the expression is tested again.
// The process continues until the controlling expression eventually has the value zero (false).

// Example of a while statement:
#include <stdio.h>
int main()
{
    int i = 1, n = 10;
    while (i < n) // controlling expression
    {
        i = i * 2;
        printf("%d ", i); // 2 4 8 16
    }
    return 0;
}
