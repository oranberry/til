// 음료수 자판기
// 자판기에 투입한 금액과 음료수 값이 입력되면 거스름돈과
// 거스름돈으로 500원의 개수와 100원의 개수를 출력하는 프로그램 작성
// 자판기의 거스름돈은 500원과 100원만으로 구성되고, 최소의 개수로 거슬러 주어야 한다.

// 입력: 첫 번째 줄에 자판기에 투입한 금액(10,000원 이하)이 입력된다.
// 두 번째 줄에 음료수의 값이 입력된다.
// 출력: 첫 번째 줄에 거스름돈이 출력
// 두 번째 줄에 거스름돈을 구성하는 500원의 개수가 출력
// 세 번째 줄에 거스름돈을 구성하는 100원의 개수를 출력
#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);

    int drink;
    scanf("%d", &drink);

    int change;
    change = input - drink;
    printf("%d\n", change);

    int five, one;
    five = change / 500;
    one = change % 500;

    printf("%d\n%d\n", five, one);

    return 0;
}
