// 재귀 함수에서 호출 스택 사용
#include <iostream>

using std::cout;
using std::endl;

int fact(const int &x)
{
    if (x == 1)
        return 1;
    return fact(x - 1) * x;
}

int main()
{
    cout << fact(5) << endl;
}
