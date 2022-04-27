// 💫 Omitting Expressions in a for statement
// If the first expression is omitted, no initialization is performed before the loop is executed:
i = 10;
for (; i > 0; i--)
    printf("T minus %d and counting\n", i);

// If the third expression is omitted, the loop body is responsible for ensuring
// that the value of the second expression eventually becomes false:
for (i = 10; i > 0;)
    printf("T minus %d and counting\n", i--);

// If the second expression is missing, it defaults to a true value,
// so the for statement doesn’t terminate
// Unless stopped in some other fashion such as a break statement
// For example, some programmers use the following for statement to establish an infinite loop:
for (;;)
    ;
// Infinite loops:  Ctrl+c to terminate from an infinite loop on Unix/Linux.

// In C99, the first expression in a for statement can be replaced by a declaration. Not in C89.
// This feature allows the programmer to declare a variable for use by the loop:
for (int i = 0; i < n; i++)
    ;
// The variable i need not have been declared prior to this statement.