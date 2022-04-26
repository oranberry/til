// Relational operators (>, <, >=, <=)
// Equality operators (==, !=)
#include <stdio.h>
int main()
{
    int i = 3, j = 2, k = 1;

    // These operators (<, >, <=, >=, ==, != ) produce 0 (representing false)
    // or 1 (representing true) when used in expressions.
    // The equality operators (==, !=) have lower precedence than the relational operators (>, <, >=, <=).

    // 1️⃣ What the output produced by:
    i < j == j < k;
    // is equivalent to
    (i < j) == (j < k);

    printf("%d\n", i < j == j < k); // 0 == 0 -> 1

    // 2️⃣ What the output produced by:
    i % j + k > 2;
    printf("%d\n", i % j + k > 2); // 0

    return 0;
}
