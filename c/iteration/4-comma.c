// 💫 The Comma Operator (,)
// A for statement may need to have two (or more) initialization expressions
// or one that increments several variables each time through the loop.

// This effect can be accomplished by using a comma expression as the first or third expression in the for statement.
// With additional commas, the for statement could initialize more than two variables.
for (sum = 0, i = 1; i <= N; i++)
    sum += i;
