// 💫 External(Global) Variables
// Passing arguments is one way to transmit information to a function.
// Functions can also communicate through external variables—variables that are declared outside the body of any function.
// External variables are sometimes known as global variables.

// Properties of external variables:
// Static storage duration: has a permanent storage location,
// it retains its value throughout the execution of the program
// File scope: having file scope means that an external variable is visible
// from its point of declaration to the end of the enclosing file.

#include <stdio.h>
int counter = 0; // counter is a external (global) variable
void fn();
int main()
{
    int i;
    printf("Program storage starting\n");
    for (i = 0; i < 5; i++)
    {
        fn();
    }
    printf("The function was called %d times\n", counter);
    printf("Normal termination\n");
    return 0;
}
void fn()
{
    counter++;
    printf("This function has been called %d times\n", counter);
}