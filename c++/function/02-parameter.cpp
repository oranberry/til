#include <iostream>

using namespace std;

void helloCPP(int, int); // 함수 원형을 작성할 때는 변수 이름은 생략 가능하고 데이터형만 작성해도 됨.

int main()
{
    int times, times2;
    cout << "정수를 입력하십시오. \n";
    cin >> times;
    cout << "정수를 한번 더 입력하십시오. \n";
    cin >> times2;
    helloCPP(times, times2); // 전달인자 arguments

    return 0;
}

void helloCPP(int n, int m) // 매개변수 parameters
{
    for (int i = 0; i < n; i++)
        cout << "Hello\n";

    for (int i = 0; i < n; i++)
        cout << "C++\n"
}