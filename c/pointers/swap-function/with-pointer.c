/* What are the values of x and y after calling swap(&x, &y) with the swap function defined as follows? */
#include <stdio.h>
void swap (int *a, int *b);
int main()
{
  int x = 3, y = 4;
  swap(&x, &y);
  printf("The value of x is %d and y is %d\n", x, y);
  return 0;
}
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
/* The value of x is 4 and y is 3 */

/********************************************************************/

/* without pointers 
#include <stdio.h>
void swap (int a, int b);
int main()
{
  int x = 3, y = 4;
  swap(x, y);
  printf("The value of x is %d and y is %d\n", x, y); 
  -> The value of x is 3 and y is 4 (can't get correct answer)

  return 0;
}
void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
} 
*/
