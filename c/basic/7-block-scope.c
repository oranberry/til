// Block
// Local variables have block scope – the scope doesn’t extend beyond the function to which it belongs,
// other functions can use the same name for other purposes.

// By default, the storage duration of a variable declared in a block is automatic:
// storage for the variable is allocated when the block is entered and deallocated when the block is exited.

// Example of a block:
if (i > j)
{
    /* swap values of i and j */
    int temp = i;
    i = j;
    j = temp;
}
// temp is a local variable and has block scope