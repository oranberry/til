#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // 정수형
    // short < int < long < long long
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int는 " << sizeof n_int << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;

    cout << "short은 " << sizeof n_short << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;

    cout << "long은 " << sizeof n_long << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;

    cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;

    // 양수 범위만 사용할 때에는 unsigned를 붙여서 사용!
    unsigned short a = -2; // ❌❌
    cout << a << endl;     // 65534 (Error는 발생하지 않음)

    // 실수형
    float b = 3.14;
    int c = 3.14; // ❌❌

    cout << b << " " << c << endl; // 3.14 3

    return 0;
}