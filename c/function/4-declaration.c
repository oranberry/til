// 💫 Function Declarations
// C doesn’t require that the definition of a function precede its calls.

// For example, when the compiler encounters the first call of average in main,
// it has no information about the function.

// Instead of producing an error message, the compiler assumes that average returns an int value.
// We say that the compiler has created an implicit declaration of the function.

// The compiler is unable to check that we’re passing average the right number of arguments and that the arguments have the proper type.
// Instead, it performs the default argument promotions and hopes for the best.
// When it encounters the definition of average later in the program, the compiler notices
// that the function’s return type is actually double, not int, and so we get an error message.
// error: conflicting types for ‘average’

// C offers a solution: declare each function before calling it.
// A function declaration provides the compiler with a brief glimpse at a function whose full definition will appear later.
// General form of a function declaration:
// return-type function-name ( parameters ) ;

// The declaration of a function must be consistent with the function’s definition.
// Here’s the average.c program with a declaration of average added.

#include <stdio.h>
double average(double a, double b); /* DECLARATION */
int main(void)
{
    double x, y, z;
    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);
    printf("Average of %g and %g: %g\n", x, y, average(x, y));
    printf("Average of %g and %g: %g\n", y, z, average(y, z));
    printf("Average of %g and %g: %g\n", x, z, average(x, z));
    return 0;
}
double average(double a, double b) /* DEFINITION */
{
    return (a + b) / 2;
}
