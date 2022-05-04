// 두 수의 합
// 두 자연수 A, B를 입력받아 더한 결과를 출력하는 프로그램 작성

// 입력: 첫 번째 줄은 두 자연수 A, B가 주어진다.
// 두 정수는 1 <= A, B <= 100이다.
// 출력: 첫 번째 줄에 두 수를 더한 결과를 출력한다.

// 예제1
// 입력: 3 5
// 출력: 3 + 5 = 8

#include <stdio.h>
int main()
{
    int a, b, sum;
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);

    return 0;
}