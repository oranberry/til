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

    int count = compare_array(b, N, value);
    
    printf("The number of elements greater than %d is %d\n", value, count);

    return 0;
}
int compare_array(int a[], int n, int value){
    int i, count = 0;
    for(i = 0; i < n; i++)
        if(a[i] > value)
            count++;
    return count;
}