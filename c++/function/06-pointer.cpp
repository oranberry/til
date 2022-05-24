#include <iostream>
using namespace std;

int func(int);

int main()
{
    // 함수를 지시하는 포인터
    // 어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용
    // 1. 함수의 주소를 얻는다.
    // 2. 함수를 지시하는 포인터를 선언한다.
    // 3. 함수를 지시하는 포인터를 사용하여 그 함수를 호출한다.

    // cout << func << endl; 함수의 시작 주소값을 얻을 수 있다.

    int (*pf)(int);
    pf = func; // 포인터에 함수 주소 저장

    cout << (*pf)(3) << endl; // 4

    return 0;
}

int func(int n)
{
    return n + 1;
}