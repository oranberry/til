/* What are the values of x and y after calling swap(x, y) with the swap function? */
#include <stdio.h>
void swap (int a, int b);
int main()
{
  int x = 3, y = 4;
  swap(x, y);
  return 0;
}
void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
  printf("The value of x is %d and y is %d\n", a, b);
}
/* The value of x is 4 and y is 3 */