// 💫 Increment and Decrement Operators
// The increment operator (++) adds one to its operand;
// the decrement operator (--) subtracts one from its operand
#include <stdio.h>

int main()
{
    int count = 0;

    count++;
    // is functionally equivalent to
    count = count + 1;
    // or
    count += 1;

    // The increment and decrement operators can be applied in postfix form:
    count++;
    count--;
    // or prefix form:
    ++count;
    --count;

    // ✨ Postfix and prefix are functionally equivalent when used alone in a statement,
    // for example, count currently contains the value 5, the two increment statements assign 6 to count.

    int total;
    count = 5;
    // ✨ When used as part of a larger expression, the two (prefix and postfix) forms can have different effects.
    // - If you use the ++ operator as prefix like: ++x
    // The value of x is incremented by 1 then, it returns the value.
    total = ++count; // assign 6 to total and 6 to count

    // - If you use the ++ operator as postfix like: x++
    // The original value of x is returned first then, x is incremented by 1
    total = count++; // assign 5 to total and 6 to count

    return 0;
}
