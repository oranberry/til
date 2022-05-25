// Recursive Approach
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

// Iterative Approach
int factorial(int n)
{
    int answer = 1;
    for (int loop = 1; loop <= n; loop++)
    {
        answer = answer * loop;
    }
    return answer;
}

// Recursive Approach
int recursiveFactorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * recursiveFfactorial(n - 1);
    }
}
