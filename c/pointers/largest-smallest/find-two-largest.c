#include <stdio.h>
void find_two_largest(int a[], int n, int *largest, int *second_largest);
int main()
{
    int N, i, max, second_max;

    printf("Enter the numbers of an array: ");
    scanf("%d", &N);
    
    int b[N];
    printf("Enter the %d elements: ", N);
    for(i = 0; i < N; i++){
        scanf("%d", &b[i]);
    }
    find_two_largest(b, N, &max, &second_max);
    printf("The largeat number is %d and The second largest number is %d\n", max, second_max);
    return 0;
}
void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    if (a[0] > a[1]) {
        *largest = a[0];
        *second_largest = a[1];
    } else {
        *largest = a[1];
        *second_largest = a[0];
    }
    for (i = 2; i < n; i++){
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest)
            *second_largest = a[i];
    }
}