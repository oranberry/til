/* Two vectors can be multplied on an entry-by-entry basis
(1, 2, 3) * (4, 5, 6) = (4, 10, 18) 
Write the following function that multiplies two vectors */

#include <stdio.h>

void multi_vec (int v1[], int v2[], int v3[], int n);
int main(void){
    int i, size;
    printf("Please enter the length of the vectors: ");
    scanf("%d", &size);

    int a[size], b[size], c[size];

    printf("Enter the first vector: ");
    for(i = 0; i < size; i++)
        scanf("%d", &a[i]);

    printf("Enter the second vector: ");
    for(i = 0; i < size; i++)
        scanf("%d", &b[i]);
    
    multi_vec(a, b, c, size);
    
    for(i = 0; i < size; i++)
        printf("%d\t", c[i]);

    return 0;
}
void multi_vec (int v1[], int v2[], int v3[], int n){
    int i;

    for(i = 0; i < n; i++){
        v3[i] = v1[i] * v2[i];
    }
}