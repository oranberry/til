// call by value
#include <stdio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int num1 = 10, num2 = 20;
    swap(num1, num2);              // swap 함수의 지역 변수인 a와 b는 서로 바뀌었으나
    printf("%d %d\n", num1, num2); // 바뀌지 않음
    return 0;
}

// call by reference
#include <stdio.h>
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int a = 10, b = 20;
    swap(&a, &b); // 주소 값 전달
    printf("%d %d\n", a, b);
    return 0;
}