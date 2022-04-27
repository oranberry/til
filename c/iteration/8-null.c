// The Null Statement
// A statement can be null — devoid of symbols except for the semicolon at the end.
// The following line contains three statements:
i = 0;
;
j = 1;

// The null statement is primarily good for one thing:
// writing loops whose bodies are empty.

// Consider the following prime-finding loop:
for (d = 2; d < n; d++)
    if (n % d == 0)
        break;

// If the n % d == 0 condition is moved into the loop’s controlling expression, the body of the loop becomes empty:
for (d = 2; d < n && n % d != 0; d++)
    ; /* empty loop body */

// Accidentally putting a semicolon after the parentheses in an if, while, or for statement creates a null statement.
if (d == 0)
    ; /*** WRONG ***/
printf("Error: Division by zero\n");
// The call of printf isn’t inside the if statement, so it’s performed regardless of whether d is equal to 0.