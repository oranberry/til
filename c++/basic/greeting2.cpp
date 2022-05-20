// 이름을 입력받아 테두리로 묶인 인사말을 생성하는 프로그램
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Please enter your first name: ";
    string name;
    cin >> name;

    // 출력 메시지 구성
    // ⚠️ const는 소멸할 때까지 값을 변경하지 않겠다는 약속. 정의할 때 반드시 초기화 해야 한다.
    const string greeting = "Hello, " + name + "!";

    // 두 번째 행과 네 번째 행
    const string spaces(greeting.size(), ' '); // 문자 개수만큼 공백을 넣는 상수
    // greeting.size()로 greeting의 문자 개수를 나타내는 정수를 얻을 수 있다.
    // spaces는 정숫값과 문자값을 받아 정숫값만큼 횟수로 문자값을 복사해 문자열을 만든다.
    const string second = "* " + spaces + " *";

    // 첫 번째 행과 다섯 번째 행
    const string first(second.size(), '*'); // 문자의 개수만큼 *을 포함하는 상수

    // 모두 출력
    cout << endl;
    cout << first << endl;
    cout << second << endl;
    cout << "* " << greeting << " *" << endl;
    cout << second << endl;
    cout << first << endl;

    return 0;
}