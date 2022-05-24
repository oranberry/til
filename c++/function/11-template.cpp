// 함수 템플릿 (함수의 일반화에 대한 서술)
// 구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의한다.
#include <iostream>
using namespace std;

// class 혹은 typeName
template <class Any>
Any sum(Any, Any);

template <class Any>
Any sum(int, Any);

int main()
{
    int a = 3;
    int b = 4;
    // cout << sum(a, b) << endl;  int int -> 두개 이상의 template에 해당해서 사용할 수 없음

    float c = 3.14;
    float d = 1.592;
    cout << sum(c, d) << endl; // float float

    cout << sum(a, c) << endl; // int float
    return 0;
}

template <class Any>
Any sum(Any a, Any b)
{
    return a + b;
}

template <class Any>
Any sum(int a, Any b)
{
    return a + b;
}