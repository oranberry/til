// ✨ 함수란?
// 하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합
// 호출한 함수에게 값을 되돌려주는, return value가 있는 함수와 없는 함수로 분류

#include <iostream>
using namespace std;

const float PIE = 3.14;
void cheers(int n);
float circle(int x);

int main()
{
    int a;
    cout << "하나의 수를 입력하시오." << endl;
    cin >> a;
    cheers(a);

    int b;
    cout << "원의 반지름 길이를 입력하시오." << endl;
    cin >> b;
    float c = circle(b);
    cout << "원의 넓이는 " << c << " 입니다." << endl;

    return 0;
}
// 리턴값이 없는 타입
void cheers(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Cheers!" << endl;
    }
    // return; (생략가능)
}
// 리턴값이 있는 타입
float circle(int x)
{
    return x * x * PIE;
}