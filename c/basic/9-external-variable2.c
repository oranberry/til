
// External variables are convenient when many functions must share a variable, but
// In most cases, it’s better for functions to communicate through parameters rather than by sharing variables:
// Functions that rely on external variables are hard to reuse in other programs.
// If an external variable is assigned an incorrect value, it may be difficult to identify the guilty function.

// Making variables external when they should be local can lead to some rather frustrating bugs.
// Code that is supposed to display a 10 × 10 arrangement of asterisks:
int i;
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
}

// Variable i should be local variables
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
        print_one_row();
        printf("\n");
    }
}