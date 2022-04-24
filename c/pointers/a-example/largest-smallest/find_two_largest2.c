#include <stdio.h>
void find_two_largest(int a[], int n, int *largest, int *second_largest);
int main()
{
    int N, i, max, second_max;

    printf("Enter the numbers of an array: ");
    scanf("%d", &N);
    
    int b[N];
    printf("Enter the %d elements: ", N);
    for(i = 0; i < N; i++)
        scanf("%d", &b[i]);

    find_two_largest(b, N, &max, &second_max);
    printf("The largeat number is %d and the second largest number is %d\n", max, second_max);

    return 0;
}
void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;
    int max, max2;

    if (a[0] > a[1]) {
        max = a[0];
        max2 = a[1];
    } else {
        max = a[1];
        max2 = a[0];
    }

    for (i = 2; i < n; i++){
        if (a[i] > max) {
            max2 = max;
            max = a[i];
        } else if (a[i] > max2)
            max2 = a[i];
    }
    *largest = max;
    *second_largest = max2;
}