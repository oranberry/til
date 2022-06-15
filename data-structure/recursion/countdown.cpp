// 카운트다운하는 함수
#include <iostream>

using std::cout;
using std::endl;

void countdown(const int &i)
{
    cout << i << endl;

    // 기본 단계 (base case)
    if (i <= 0)
        return;

    // 재귀 단계 (recursive case)
    countdown(i - 1);
}

int main()
{
    countdown(5);
}
