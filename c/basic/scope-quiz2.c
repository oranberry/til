// What is the output ?
#include <stdio.h>
void f(void);

int b = 0, c = 2; // -> c = 3
int main(void)
{
    int b = 2;
    c++;
    f();                     // 6 3
    printf("%d %d\n", b, c); // 2 3
}
void f(void)
{
    int b = 5;
    b++; // -> b = 6
    printf("%d %d\n", b, c);
}
