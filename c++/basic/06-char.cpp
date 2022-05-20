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