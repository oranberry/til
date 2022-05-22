// 두 수 A, B가 입력되면 A를 B로 나눈 몫과 나머지를 차례로 출력하는 프로그램 작성
// 입력: 첫 번째 줄에 두 수 A, B(1 < B <= A <= 100) 입력
// 출력: 첫 번째 줄에 몫과 나머지를 출력

// 예제
// 입력: 5 3
// 출력: 1 2

#include <stdio.h>
int main()
{
    int a, b, quotient, remainder;
    scanf("%d %d", &a, &b);

    quotient = a / b;
    remainder = a % b;

    printf("%d %d\n", quotient, remainder);
    return 0;
}