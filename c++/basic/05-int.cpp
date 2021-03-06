// π« C++ Fundamental Types

// ππ» Integers (int)
// An int variable holds an integer
// Integers come in three sizes: short int, int, and long int.
// If no definition is given, the initial value is unpredictable,
// So it is important that each variable be assigned a value before being used.

// β° Octal(8) constans are specified by prefixing the number with the zero digit (256 - 0400)
// β° Hexadecimal(16) constants can be specified by prefixing the number with 0x (256 - 0x100)

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

    // λ³μλ₯Ό μ¬μ©νλ €λ©΄ λ³μ μ΄λ¦κ³Ό νμμ΄ νμ
    int a;
    a = 7;
    int b = 3; // μ΄κΈ°ν(initialize)

    cout << "a = " << a << ", b = " << b << endl;

    // λ³μκ° μ΄λμ μ μ₯λλ μ§ μλ €λ©΄ & μ¬μ© (μ£Όμκ°μ΄ μΆλ ₯λλ€)
    cout << "a = " << &a << ", b = " << &b << endl;

    return 0;
}

// β οΈ λ³μλ μ¬μ©λκΈ° μ΄μ μ μ μλμ΄μΌ νλ€.
// {
//     int b;
//     {
//         int a;
//         b = 3;
//     }
//     a = 5; // ββ μ μλμ΄ μμ§ μμ!
// }