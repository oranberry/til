// 이름을 입력받아 테두리로 묶인 인사말을 생성하는 프로그램
// ********************
// *                  *
// * Hello, Hyunjung! *
// *                  *
// ********************

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Please enter your first name: ";
    string name;
    cin >> name; // Hyunjung 입력

    // 출력 메시지 구성
    // ⚠️ const는 소멸할 때까지 값을 변경하지 않겠다는 약속. 정의할 때 반드시 초기화 해야 한다.
    // name의 값은 프로그램을 실행하기 전까지는 정해져있지 않으므로 상수가 아니다.
    const string greeting = "Hello, " + name + "!"; // Hello, Hyunjung!

    // 두 번째 행과 네 번째 행
    // greeting의 문자 개수만큼 공백을 넣는 상수 spaces
    // greeting이라는 객체는 size라는 구성 요소가 있다. 이 구성 요소는 함수이므로 값을 얻으려고 호출할 수 있다.
    // size() 함수: return the size of the set container or number of elements
    // 즉, greeting.size()로 greeting의 문자 개수를 나타내는 정수를 얻을 수 있다.
    // 문자 개수만큼 문자값(여기서는 ' ' 공백)을 복사해 문자열을 만든다.
    const string spaces(greeting.size(), ' ');
    const string second = "* " + spaces + " *"; // 문자열끼리 결합 (concatenate)
    // + 연산자는 피연산자의 타입에 따라 실행하는 연산이 다르다. ex. 3 + 4 -> 7
    // 연산자가 다양한 타입의 피연산자에 따라 다른 의미로 동작하는 것을 연산자의 오버로드(overload)라고 한다.

    // 첫 번째 행과 다섯 번째 행
    // 정숫값과 문자값을 받아 정숫값만큼의 횟수로 문자값을 복사해 문자열을 만든다.
    const string first(second.size(), '*');

    // 모두 출력
    cout << endl;
    cout << first << endl;
    cout << second << endl;
    cout << "* " << greeting << " *" << endl;
    cout << second << endl;
    cout << first << endl;

    return 0;
}