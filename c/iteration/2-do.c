// 💫 The do statement
// When a do statement is executed, the loop body is executed first,
// then the controlling expression is evaluated.

// If the value of the expression is nonzero (true),
// the loop body is executed again and then the expression is evaluated once more.

// Example
// Calculates the number of digits in an integer
#include <stdio.h>
int main(void)
{
    int digits = 0, n;
    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    do
    {
        n /= 10;
        digits++;
    } while (n > 0);

    printf("The number has %d digit(s).\n", digits);
    return 0;
}