// 💫 Pointers as Return Value
// We can not only pass pointers to functions
// but also write functions that return pointers.

// pointers to two integers, returns a pointer to whichever integer is larger
#include <stdio.h>
int *max(int *a, int *b)
{
  if (*a > *b)
    return a;
  else
    return b;
}

int main()
{
  int *p;
  int i, j;
  printf("Enter the two integer numbers: ");
  scanf("%d%d", &i, &j);

  p = max(&i, &j);
  printf("The larger integer is %d\n", *p);
  return 0;
}
// During the call of max, *a is an alias for i, while *b is an alias for j.
// If i has a larger value than j, max returns the address of i;
// otherwise, it returns the address of j. After the call, p points to either i or j.