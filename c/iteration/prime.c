#include <stdio.h>
int main()
{
    int d, n;
    int is_prime = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (d = 2; d < n; d++)
    {
        if (n % d == 0)
        {
            is_prime = 0;
            break;
        }
    }
    if (is_prime)
        printf("It is a prime number.\n");
    else
        printf("It is not a prime number.\n");

    return 0;
}