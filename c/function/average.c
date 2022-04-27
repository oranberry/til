/* Computes pairwise averages of three numbers */

#include <stdio.h>

double average(double a, double b)
{
  return (a + b) / 2;
}

int main(void)
{
  double x, y, z;

  printf("Enter three numbers: ");
  scanf("%lf%lf%lf", &x, &y, &z);
  // average(x, y) is a call of the average function
  printf("Average of %g and %g: %g\n", x, y, average(x, y));
  printf("Average of %g and %g: %g\n", y, z, average(y, z));
  printf("Average of %g and %g: %g\n", x, z, average(x, z));
  // The return value of average isn’t saved; the program prints it and then discards it.

  // If we had needed the return value later in the program, we could have captured it in a variable:
  // avg = average(x, y);
  return 0;
}
