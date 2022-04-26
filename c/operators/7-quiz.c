// Is the expression i < j < k is legal?
// If so, does it test whether j lies between i and k?

// Since the < operator is left associative,
// this expression is equivalent to (i < j) < k
// The 1 or 0 produced by i < j is then compared to k.
// The correct expression to test whether j lies between i and k is i < j && j < k.

// Is the following if statement legal?
// What does it do when n is equal to 12?
#include <stdio.h>
int main()
{
    int n = 12;

    if (n >= 1 <= 10)
    {
        printf("%d\n", n); // 12
    }

    return 0;
}
