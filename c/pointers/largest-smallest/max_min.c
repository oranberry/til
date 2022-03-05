/* Finds the largest and smallest Elements in an Array */
#include <stdio.h>
#define N 10

void max_min(int a[], int n, int *max, int *min); /* prototype */

int main(void) {
    int b[N], i, big, small;

    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++){
        scanf("%d", &b[i]);
    }

    max_min(b, N, &big, &small); /* A call of max_min */
    
    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);
  
    return 0;
}
void max_min(int a[], int n, int *max, int *min)
{
  int i;
  
  *max = *min = a[0];
  for(i = 1; i < n; i++){
    if(a[i] > *max)
      *max = a[i]; /* max points to big, an assignment to *max will modify the value of big */
    else if(a[i] < *min)
      *min = a[i]; /* min points to small, an assignment to *min will modify the value of small */
  }
}