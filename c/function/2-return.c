// Function Return Type
// The return type of a function is the type of value that the function returns.

// Rules governing the return type:
// Functions may not return arrays.
// Specifying that the return type is void indicates that the function doesn’t return a value.

// A non-void function must use the return statement to specify what value it will return.
// The return statement has the form return expression ;
// If the type of the expression in a return statement doesn’t match the function’s return type,
// the expression will be implicitly converted to the return type.
// If a function returns an int, but the return statement contains a double expression, the value of the expression is converted to int.

// return statements may appear in functions whose return type is void, provided that no expression is given:
return; /* return in a void function */

// Example:
void print_int(int i)
{
    if (i < 0)
        return;
    printf("%d", i);
}