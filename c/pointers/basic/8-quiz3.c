// Write a program that declares a pointer variable p to integer type.
// Declares an integer variable i, initialize to 4.
// Assign p by the address of i.
// Display the values of i and *p.
// Display the values of &i and p, use %p as the conversion specification.
// Change the value of i to  32 by using *p
// Display the values of i and p.
// Add statements to the program that declares an int array a with 4 elements 5, 8, 2, 9.
// Display the memory address of each element using & and %p.

#include <stdio.h>
int main()
{
    int *p, *q;
    int i = 4;
    p = &i;
    q = &i;
    printf("i is %d and *p is %d\n", i, *p);
    printf("&i is %p and p is %p\n", &i, p);

    *p = 32;
    printf("i is %d and *p is %d\n", i, *p);
    int a[4] = {23, 4, 6, 19};
    int k;
    for (k = 0; k < 4; k++)
    {
        printf("&a[%d]: %p\n", k, &a[k]);
    }
    return 0;
}