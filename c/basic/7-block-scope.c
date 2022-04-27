// Block Scope
// Local variables have block scope – the scope doesn’t extend beyond the function to which it belongs,
// other function can use the same name for other purposes.

// By default, the storage duration of a variable declared in a block is automatic:
// storage for the variable is allocated when the block is entered and deallocated when the block is exited.

// Example of a block:
// swap values of i and j
if (i > j)
{
    int temp = i; // temp is a local variable and has block scope
    i = j;
    j = temp;
}
s