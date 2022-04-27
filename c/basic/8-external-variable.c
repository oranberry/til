// 💫 External(Global) Variables
// Passing arguments is one way to transmit information to a function.
// Functions can also communicate through external variables
// — variables that are declared outside the body of any function.

// Properties of external variables:
// Static storage duration: has a permanent storage location,
// it retains its value throughout the execution of the program

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
/* Output:
Program storage starting
This function has been called 1 times
This function has been called 2 times
This function has been called 3 times
This function has been called 4 times
This function has been called 5 times
The function was called 5 times
Normal termination
*/