/* Decompose a floating-point number into its integral and fractional part */
#include <stdio.h>
void decompose (double x, int *int_part, double *frac_part);

int main(void)
{
  double n, d;
  int i;
  printf("Enter a floating-point number: ");
  scanf("%lf", &n);
  
  decompose(n, &i, &d);
  printf("Integer part: %d\nFractional part: %f\n", i, d);
  
  return 0;
}

void decompose(double x, int *int_part, double *frac_part)
{
	*int_part = (int) x;
	*frac_part = x - *int_part;
}