// Write a program that declares a pointer variable p to integer type.
// 1. Declares an integer variable i, initialize to 4
// 2. Assign p by the address of i
// 3. Display the values of i and *p
// 4. Display the values of &i and p, use %p as the conversion specification
// 5. Change the value of i to  32 by using *p
// 6. Display the values of i and p
// 7. Add statements to the program that declares an int array a with 4 elements 5, 8, 2, 9. Display the memory address of each element using & and %p

#include <stdio.h>
int main()
{
    int *p;
    int i = 4;
    p = &i;
    printf("i is %d and *p is %d\n", i, *p);
    printf("&i is %p and p is %p\n", &i, p);

    *p = 32;
    printf("i is %d and *p is %d\n", i, *p);

    int a[4] = {23, 4, 6, 19};
    int j;
    for (j = 0; j < 4; j++)
    {
        printf("&a[%d]: %p\n", j, &a[j]);
    }
    return 0;
}