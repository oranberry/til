// 💫 Boolean
// bool is a type available in C99 in stdbool.h
#include <stdbool.h>

int main()
{
    bool flag; // flag = false, flag = true

    // test whether flag is nonzero as an int or true as bool, we can write
    if (flag != 0) // if(flag)
        ;
    // It executes the statement if flag has a value other than 0 . Why?
    // When an if statement is executed, expression is evaluated;
    // if its value is nonzero, statement is executed.

    // To test whether flag is 0 as an int or false as bool, we can write
    if (flag == 0) // if(!flag)
        ;

    // The logical operators (in this case, !) treat any nonzero operand as a true value and any zero operand as a false value.

    return 0;
}
