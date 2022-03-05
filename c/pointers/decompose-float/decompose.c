/* Decompose a floating-point number into its integral and fradtional part */
#include <stdio.h>
void decompose (double x, int *int_part, double *frac_part);

int main(void)
{
    int n, i;
    double d;

    decompose(3.14159, &i, &d);
    printf("Integer part: %d\nFractional part: %d\n", i, d);
    return 0;
}



void decompose(double x, int *int_part, double *frac_part)
{
	*int_part = (int) x;
	*frac_part = x - *int_part;
}