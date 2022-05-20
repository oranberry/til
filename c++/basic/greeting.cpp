// 이름을 묻고 인사하는 프로그램
#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";

    // 입력한 내용을 전달받으려면 이를 저장할 장소가 있어야 한다. -> 변수(variable)
    std::string name; // 변수 타입: string, 변수 이름: name
    // 문자열 변수를 정의하면 암묵적으로 변수가 초기화 된다. 원하는 값을 넣어 초기화할 수 있지만, 이 동작이 없다면 문자를 전혀 갖지 않는다.
    // 이러한 문자열을 '빈(empty) 문자열' 또는 'null 문자열'이라고 한다.

    std::cin >> name;
    // 문자열을 읽도록 라이브러리에 요청하면 공백(whitespace)문자(스페이스, 탭, 백스페이스, 행바꿈)를 무시하고
    // 다음 공백 문자나 EOF(End Of File)이 나타날 때까지 문자들을 읽어 변수에 넣는다.

    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}