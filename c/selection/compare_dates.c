#include <stdio.h>

/* Note: Program assumes years are in the same century. */

int main(void)
{
  int month1, day1, year1, month2, day2, year2;
  int first_earlier = 0;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month1, &day1, &year1);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month2, &day2, &year2);

  // When it encounters a non-white-space character in a format string, scanf compares it with the next input character.
  // If they match, scanf discards the input character and continues processing the format string.
  // If they don’t match, scanf puts the offending character back into the input, then aborts.
  // If the format string is "%d/%d" and the input is •5/•96, scanf succeeds.
  // If the input is •5•/•96 , scanf fails, because the / in the format string doesn’t match the space in the input.
  // To allow spaces after the first number, use the format string "%d /%d" instead.

  if (year1 != year2)
    first_earlier = year1 < year2;
  else if (month1 != month2)
    first_earlier = month1 < month2;
  else
    first_earlier = day1 < day2;

  if (first_earlier)
    printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
  else
    printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);

  return 0;
}
