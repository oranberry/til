// 💫 Exiting from a loop
// Using the break statement, it’s possible to write a loop
// with an exit point in the middle or a loop with more than one exit point.

// The break statement can transfer control out of a switch statement,
// but it can also be used to jump out of a while, do, or for loop.

// A loop that checks whether a number n is prime can use a break statement
// to terminate the loop as soon as a divisor is found:
is_prime = 1;

for (d = 2; d < n; d++)
{
    if (n % d == 0)
    {
        is_prime = 0;
        break;
    }
}

// Loops that read user input, terminating when a particular value is entered
for (;;)
{
    printf("Enter a number (enter 0 to stop): ");
    scanf("%d", &n);

    if (n == 0)
        break;

    printf("%d cubed is %d\n", n, n * n * n);
}

// A break statement transfers control out of the innermost enclosing while, do, for, or switch.
// When these statements are nested, the break statement can escape only one level of nesting.
while (...)
{
    switch (...)
    {
        ... break;
        ...
    }
}
// break transfers control out of the switch statement, but not out of the while loop.