// ✨ File scope(<->block scope): having file scope means that an external variable is visible
// from its point of declaration to the end of the enclosing file.

// External variables are convenient when many functions must share a variable, BUT
// In most cases, it’s better for functions to communicate through parameters rather than by sharing variables:
// Functions that rely on external variables are hard to reuse in other programs.
// If an external variable is assigned an incorrect value, it may be difficult to identify the guilty function.

// Making variables external when they should be local can lead to some rather frustrating bugs.
// Code that is supposed to display a 10 × 10 arrangement of asterisks:

// ❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌
#include <stdio.h>
void print_one_row();
void print_all_rows();
int i; // ❌❌❌
int main()
{
    print_all_rows();
    return 0;
}
void print_one_row(void)
{
    for (i = 1; i <= 10; i++)
        printf("*");
}
void print_all_rows(void)
{
    for (i = 1; i <= 10; i++)
    {
        print_one_row();
        printf("\n");
    }
} // only one row ********** get with external variable! 👎🏻
// ❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌

// ⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️
// Variable i should be local variables 👍🏻
#include <stdio.h>

void print_one_row();
void print_all_rows();

int main()
{
    print_all_rows();
    return 0;
}
void print_one_row(void)
{
    int i;
    for (i = 1; i <= 10; i++)
        printf("*");
}
void print_all_rows(void)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        // printf("i is %d\n", i);
        print_one_row();
        // printf("\ni is %d\n", i);
        printf("\n");
    }
}
// ⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️⭕️