#include <stdio.h>
void multi_vec(int *v1, int *v2, int *v3, int n);

int main(void)
{
  int i, size;
  
  printf("Please enter the length of the vectors: ");
  scanf("%d", &size);
  
  int a[size], b[size], c[size];
  
  printf("Enter the first vector: ");
  for(i=0;i<size;i++)
    {
      scanf("%d", &a[i]); 
    }
        
  printf("Enter the second vector: ");
  for(i=0;i<size;i++)
  {
    scanf("%d", &b[i]); 
  }
  
  multi_vec(a, b, c, size);
  for(i=0;i<size;i++)
  {
    printf("%d ", c[i]); 
  }
  
  return 0;
}
void multi_vec(int *v1, int *v2, int *v3, int n)
{
  int *p, *q, *r;
  for(p = v1, q = v2, r = v3; p < v1 + n; p++, q++, r++)
    *r = *p * *q;
}