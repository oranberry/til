// 💫 Function Definition
// After the function name comes a list of parameters.
// Each parameter is preceded by a specification of its type; parameters are separated by commas.
// If the function has no parameters, the word void could be put between the parentheses  or left empty.

// The body of a function may include both declarations and statements.
// An alternative version of the average function :
double average(double a, double b)
{
  double sum;     /* declaration */
  sum = a + b;    /* statement */
  return sum / 2; /* statement */
}
// Variables declared in the body of a function can’t be examined or modified by other functions.