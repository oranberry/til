/* Count the number of elements greater than value. */
#include <stdio.h>

int compare_array(int a[], int n, int value);
int main(){
    int N, value, i;

    printf("Enter the size of an array: ");
    scanf("%d", &N);

    int b[N];
    printf("Enter the element of the array: ");
    for(i = 0; i < N; i++)
        scanf("%d", &b[i]);
    
    printf("Enter the value to compare: ");
    scanf("%d", &value);

    int num = compare_array(b, N, value);
    
    printf("The number of elements greater than %d is %d\n", value, num);

    return 0;
}
int compare_array(int *a, int n, int value){
  int *p;
  int count = 0;
  for(p = a; p < a + n; p++)
    if(*p > value)
      count++;
  return count;
}