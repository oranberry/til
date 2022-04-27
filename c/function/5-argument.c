// 💫 Arguments
// In C, arguments are passed by value: when a function is called,
// each argument is evaluated and its value assigned to the corresponding parameter.

// Since the parameter contains a copy of the argument’s value,
// any changes made to the parameter during the execution of the function don’t affect the argument.

// Suppose that we need a function that will decompose a double value into an integer part and a fractional part.
// Since a function can’t return two numbers, we might try passing a pair of variables
// to the function and having it modify them:
void decompose(double x, long int_part, double frac_part)
{
    int_part = (long)x;
    frac_part = x - int_part;
}

// A call of the function:
decompose(3.14159, i, d);

// Unfortunately, i and d won’t be affected by the assignments to int_part and frac_part.
// We will discuss how the problem could be solved using pointers in Chapter 11.
