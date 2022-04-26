// In many programming languages, assignment is a statement;
// in C, however, assignment is an operator, just like +.
// Its value is left operand’s value after the assignment.
#include <stdio.h>
int main()
{
    int i, j, k;

    // Since assignment is an operator, several assignments can be chained together:
    i = j = k = 0;

    // The = operator is right associative, so this assignment is equivalent to
    i = (j = (k = 0));

    // ⚠️ What does an error message by the compiler “lvalue required as left operand of assignment.” mean?
    // The assignment operator requires an lvalue as its left operand.
    // An lvalue represents an object stored in computer memory - variables, not a constant or the result of a computation such as 10 or 2 * i.
    12 = i;    /*** WRONG ***/
    i + j = 0; /*** WRONG ***/
    -i = j;    /*** WRONG ***/

    return 0;
}
