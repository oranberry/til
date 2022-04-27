// Recursion Function
// A function is recursive if it calls itself.
// The following function computes n! recursively, using the formula n! = n × (n – 1)!:
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

// Trace the execution of the statement i = fact(3);
// fact(3) finds that 3 is not less than or equal to 1, so it calls fact(2),
// which finds that 2 is not less than or equal to 1, so it calls fact(1),
// which finds that 1 is less than or equal to 1, so it returns 1, causing fact(2)
// to return 2 × 1 = 2, causing fact(3) to return 3 × 2 = 6.

// All recursive functions need some kind of termination condition in order to prevent infinite recursion.
// The following recursive function computes xn, using the formula xn = x × xn–1.
int power(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}