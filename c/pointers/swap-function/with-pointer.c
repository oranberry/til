#include <stdio.h>
void swap (int *a, int *b);
int main()
{
  int x = 3, y = 4;
  swap(&x, &y);
  printf("The value of x is %d and y is %d\n", x, y);
  /*** result: The value of x is 4 and y is 3 ***/
  return 0;
}
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

/*****************************************************************
 * without pointers

#include <stdio.h>
void swap (int a, int b);
int main()
{
  int x = 3, y = 4;
  swap(x, y);
  printf("The value of x is %d and y is %d\n", x, y); 
  *** result: The value of x is 3 and y is 4 (not working swap function) ***

  return 0;
}
void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
} 
******************************************************************/
