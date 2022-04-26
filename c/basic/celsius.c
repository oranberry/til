// Converts a Fahrenheit temperature to Celsius
#include <stdio.h>

#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0 / 9.0)
// Defining SCALE_FACTOR to be (5.0 / 9.0) instead of (5 / 9) is important

int main(void)
{
  double fahrenheit, celsius;

  printf("Enter Fahrenheit temperature: ");
  // Read in a double value:
  // "%lf" tells scanf to look for an input value in double format (l stands for long)
  scanf("%lf", &fahrenheit);

  celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
  // "%.1f" display with just one digit after the decimal point
  printf("Celsius equivalent: %.1f\n", celsius);

  return 0;
}
