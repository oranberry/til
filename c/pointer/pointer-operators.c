#include <stdio.h>
int main()
{
    int *p;
    int i = 4;
    p = &i;
    printf("i is %d and *p is %d\n", i, *p);
    printf("&i is %p and p is %p\n", &i, p);
 
    *p = 32;
    printf("i is %d and *p is %d\n", i, *p);

    int a[4] = {23, 4, 6, 19};
    int j;
    for(j=0; j<4; j++)
    {
        printf("&a[%d]: %p\n", j, &a[j]);
    }
    return 0;
}