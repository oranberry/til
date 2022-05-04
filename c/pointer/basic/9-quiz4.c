#include <stdio.h>

int main()
{
    int a = 20;

    printf("%d\n", a);     // 20
    printf("%x\n", &a);    // 변수 a의 메모리 주소 출력 (메모리 주소는 %x로 출력 - 16진수)
    printf("%d\n", *(&a)); // *은 메모리 주소에 있는 값을 읽어내는 연산자 -> 20

    int *p; // 정수형 포인터 변수는 실제 메모리 주소 값을 저장할 수 있는 변수
    p = &a; // 포인터 변수 p에 변수 a의 주소 대입

    printf("%x\n", p);  // 변수 안에 들어 있는 주소 값
    printf("%x\n", &p); // p의 메모리 주소
    printf("%d\n", *p); // 주소가 가르키는 곳의 값 출력

    return 0;
}