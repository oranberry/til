// 💫 C++ Fundamental Types
// char - character
// int - integer
// short - short integer
// long - long integer
// bool - Boolean value, either true or false
// float - single precision floating point number
// double - double precision floating point number
// void - indicates the absence of any type information
// enum(enumeration) - type to represent a set of discrete values.
// Together, enumerations and the types bool, char, and int are called integral types.

// 👉🏻 Characters (char)
// A char variable holds a single character.
// Every character is associated with an integer code
// Character literals are enclosed in single quotes, as in 'a', 'A', and '+'.
// A backslash (\) is used to specify a number of special character literals
// '\n' - newline
// '\b' - backspace
// '\t' - tab
// '\0' - null (sometimes used to indicate the end of a string of characters)
// '\'' - single quote
// '\"' - double quote
// '\\' - backslash

#include <iostream>
using namespace std;

int main()
{
    // char 작은 문자형 ' ' (작은 문자열)
    int a = 77;
    char b = a;
    cout << b << endl; // M

    char c = 'a';
    cout << c << endl; // a

    // null 문자 \0를 만나야 끝남.
    char d[] = {'a', 'b', 'c', '\0'};
    cout << d << endl; // abc

    // char 큰 문자형 " " (큰 문자열) - string
    // " "에는 명시적으로 null 문자가 포함되어 있음

    return 0;
}