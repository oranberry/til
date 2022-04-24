#include <stdio.h>

int *find_index_largest(int a[], int n);

int main()
{
    int i, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements for the array: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int *max = find_index_largest(a, n);
    printf("The largest value is: %d", *max);

    return 0;
}
int *find_index_largest(int a[], int n){
    int i, *largest = &a[0];
    for(i = 1; i < n; i++)
        if(a[i] > *largest)
            largest = &a[i];
    
    return largest;
}