// When an if statement is executed, expression is evaluated;
// if its value is nonzero, statement is executed.
// It also applies to while, do-while, and condition for the for loop.

// ⚠️ Confusing == (equality) with = (assignment) is perhaps the most common C programming error.
// The statement if (i == 0) ... tests whether i is equal to 0.
// What doe the statement if (i = 0) ... do?
// It assigns 0 to i, and skip the statement (since i = 0 evaluates to be 0).