/* Modify max-min program which finds the largest and smallest elements in an array using pointer arithmetic */
#include <stdio.h>

void max_min(int a[], int n, int *max, int *min); /* prototype */

int main(void) {
    int i, N, big, small;

    printf("Enter the numbers of elements in an array: ");
    scanf("%d", &N);

    int b[N];
    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++){
        scanf("%d", &b[i]);
    }

    max_min(b, N, &big, &small); /* A call of max_min */
    
    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);
  
    return 0;
}
void max_min(int *a, int n, int *max, int *min)
{
  int *p;

  *max = *min = *a;
  for(p = a+1; p < a + n; p++){
    if(*p > *max)
      *max = *p; /* max points to big, an assignment to *max will modify the value of big */
    else if(*p < *min)
      *min = *p; /* min points to small, an assignment to *min will modify the value of small */
  }
}