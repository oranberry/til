// π« Defining Names for Constants Using macro
// Some values in a program rely on the constants whose meaning may not be clear to someone reading the program.
// Using only upper-case letters in macro names is a common convention.

// Using a feature known as macro definition, we can name the constant:
#define QUARTER 25

// When a program is compiled, the preprocessor replaces each macro by the value that it represents.
// During preprocessing, the statement
// amount = amount + num_quaters * QUARTERS;
// will become
// amount = amount + num_quaters * 25;

// The value of a macro can be an expression:
#define RECIPROCAL_OF_PI (1.0 / 3.14159)
// β οΈ If it contains operators, the expression should be enclosed in parentheses.
// Example
#include <stdio.h>
#define WEEKLY 7
#define BIWEEKLY WEEKLY + WEEKLY // β οΈβ οΈ
int main(void)
{
    int days = 10 * BIWEEKLY;
    printf("%d\n", days); // 77
    return 0;
}

// #define BIWEEKLY (WEEKLY + WEEKLY)μ²λΌ κ΄νΈκ° μμ§ μμμ
// day = 10 * 7 + 7 = 77 μ΄ λμ¨λ€.
// μ νν κ°μ μ»κΈ° μν΄μλ λ°λμ κ΄νΈ(parentheses) μ¬μ©!