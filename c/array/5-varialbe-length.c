// 💫 Variable-Length Arrays
// Use an expression instead of a constant for the length of array.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int a[n]; // array is declared after n is read

    return 0;
}
