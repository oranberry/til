#include <iostream>
using namespace std;

int main()
{
    // 변수를 사용하려면 변수 이름과 타입이 필요
    int a;
    a = 7;
    int b = 3; // 초기화(initialize)

    cout << "a = " << a << ", b = " << b << endl;

    // 변수가 어디에 저장되는 지 알려면 & 사용 (주소값이 출력된다)
    cout << "a = " << &a << ", b = " << &b << endl;

    return 0;
}

// ⚠️ 변수는 사용되기 이전에 정의되어야 한다.
// {
//     int b;
//     {
//         int a;
//         b = 3;
//     }
//     a = 5; // ❌❌ 정의되어 있지 않음!
// }