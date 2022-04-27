// 💫 Printing the value of a variable
#include <stdio.h>

int main()
{
    int height = 10, length = 20;

    // There's no limit to the number of variables that can be printed by a single call of printf:
    printf("Height: %d, Length: %d\n", height, length); // Height: 10, Length: 20

    // Conversion specifications %d works only for int variables;
    // to print a float or double variable, use %f instead

    // By default, %f displays a number with *six digits* after the decimal point.
    // To force %f to display p digits after the decimal point, put .p between % and f.
    double profit = 2150.4838940;
    printf("Profit: $%.2f\n", profit); // Profit: $2150.48

    // ⚠️ Compilers aren’t required to check that the number of conversion specifications
    // in a format string matches the number of output items.
    // But, you may get a warning: too few (many) arguments
    int i = 5, j = 10;
    // 1. Too many conversion specifications:
    printf("%d %d\n", i); /*** WRONG ***/
    // 2. Too few conversion specifications:
    printf("%d\n", i, j); /*** WRONG ***/

    // ⚠️ Compilers aren’t required to check that a conversion specification is appropriate.
    // If the programmer uses an incorrect specification, the program will produce meaningless output:
    int x = 14;
    double y = 4.5;
    printf("%f %d\n", x, y); /*** WRONG ***/
    // You will get a warning:
    // format ‘%d’ expects type ‘int’, but argument has type ‘double’
    // format '%f' expects type 'double' or 'float', but argument has type 'int'

    return 0;
}
