// 💫 Reading Input - scanf()
// scanf requires a format string to specify the appearance of the input data.
// The ✨ & symbol (the address operator) ✨ is usually required when using scanf.
// It provides the address of the variable in the memory.
// scanf ignores white-space characters (space, tab, and new-line).

#include <stdio.h>

int main()
{
    int i, j;
    double x, y;

    // Example of using scanf to read an int value:
    scanf("%d", &i); // reads an integer; stores into i

    // Reading a double value requires a call of scanf:
    // "%lf" tells scanf to look for an input value in double format (l stands for long)
    // "%f" - float
    scanf("%lf", &x);

    // A call of scanf that reads four numbers:
    scanf("%d%d%lf%lf", &i, &j, &x, &y);

    return 0;
}
