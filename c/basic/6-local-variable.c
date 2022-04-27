// 💫 Local variable
// Local variable storage(automatic storage duration)
// Storage (memory) is “automatically” allocated when the enclosing function is called
// and deallocated when the function returns.
// Local variable scope (block scope) – Where it is visible
// A local variable is visible from its point of declaration to the end of the enclosing function body.

#include <stdio.h>
void fn();
int main()
{
    int i;
    printf("Program storage starting\n");
    for (i = 0; i < 5; i++)
    {
        fn();
    }
    printf("Normal termination\n");
    return 0;
}
void fn()
{
    int counter = 0;
    counter++;
    printf("This function has been called %d times\n", counter);
}