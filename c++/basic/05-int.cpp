// 💫 C++ Fundamental Types

// 👉🏻 Integers (int)
// An int variable holds an integer
// Integers come in three sizes: short int, int, and long int.
// If no definition is given, the initial value is unpredictable,
// So it is important that each variable be assigned a value before being used.

// ➰ Octal(8) constans are specified by prefixing the number with the zero digit (256 - 0400)
// ➰ Hexadecimal(16) constants can be specified by prefixing the number with 0x (256 - 0x100)

#include <iostream>
using namespace std;

int main()
{
    // declaration examples of integral variables
    char newline = '\n';
    short n; // n's value is undefined
    int octal_num = 0400;
    int hex_num = 0x100;
    long big_num = 314159265L;

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