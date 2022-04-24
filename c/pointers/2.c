#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int *p;

    p = &a;
    printf("%d\n", *p); // 10

    *p = b;
    printf("%d\n", *p); // 20

    *p = *p + 1;
    printf("%d\n", *p); // 21

    // 최종 메모리에 들어있는 값은 a = 21, b = 20 이고,
    // p는 a의 메모리 주소를 가리키고 있다.

    printf("%d\n", a); // 21

    return 0;
}