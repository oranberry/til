// 💫 Defining Names for Constants
// Some values in a program rely on the constants whose meaning may not be clear to someone reading the program.
// Using only upper-case letters in macro names is a common convention.

// Using a feature known as macro definition, we can name the constant:
#define QUARTER 25

// When a program is compiled, the preprocessor replaces each macro by the value that it represents.
// During preprocessing, the statement
// amount = amount + num_quaters * QUARTERS; will become
// amount = amount + num_quaters * 25;

// The value of a macro can be an expression:
// If it contains operators, the expression should be enclosed in parentheses.
#define RECIPROCAL_OF_PI (1.0 / 3.14159)