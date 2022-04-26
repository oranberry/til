// 💫 The switch Statement
// The word switch must be followed by an integer expression—the controlling expression—in parentheses.
// Characters are treated as integers in C and thus can be tested in switch statements.
// Floating-point numbers and strings don’t qualify, however.

// example
switch (grade)
{
case 4:
    printf("Excellent");
    break;
case 3:
    printf("Good");
    break;
case 2:
    printf("Average");
    break;
case 1:
    printf("Poor");
    break;
case 0:
    printf("Failing");
    break;
default:
    printf("Illegal grade");
    break;
}

// Several case labels may precede a group of statements:
switch (grade)
{
case 4:
case 3:
case 2:
case 1:
    printf("Passing");
    break;
case 0:
    printf("Failing");
    break;
default:
    printf("Illegal grade");
    break;
}

// 💫 The Role of the default and break Statement
// The order of the cases doesn’t matter, and the default case doesn’t need to come last.
// If the default case is missing and the controlling expression’s value doesn’t match any case label,
// control passes to the next statement after the switch.

// Executing a break statement causes the program to “break” out of the switch statement;
// execution continues at the next statement after the switch.

// Without break (or some other jump statement) at the end of a case, control will flow into the next case.