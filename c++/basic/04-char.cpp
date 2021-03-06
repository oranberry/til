// π« C++ Fundamental Types
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

// ππ» Characters (char)
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
    // char μμ λ¬Έμν ' ' (μμ λ¬Έμμ΄)
    int a = 77;
    char b = a;
    cout << b << endl; // M

    char c = 'a';
    cout << c << endl; // a

    // null λ¬Έμ \0λ₯Ό λ§λμΌ λλ¨.
    char d[] = {'a', 'b', 'c', '\0'};
    cout << d << endl; // abc

    // char ν° λ¬Έμν " " (ν° λ¬Έμμ΄) - string
    // " "μλ λͺμμ μΌλ‘ null λ¬Έμκ° ν¬ν¨λμ΄ μμ

    return 0;
}