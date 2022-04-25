#include <stdio.h>

int *find_largest(int a[], int n);

int main()
{
    int i,  n;
    int *max;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements for the array: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = find_largest(a, n);
    printf("the largest value is: %d\n", *max);

    return 0;
}
int *find_largest(int a[], int n){
    int i;
    int *largest;
    largest = &a[0];  //index of the first element

    for(i = 1; i < n; i++)
        if(a[i] > *largest)   
            largest = &a[i];
    
    return largest;
}