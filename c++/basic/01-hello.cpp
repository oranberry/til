// 간단한 C++ 프로그램
#include <iostream>
// 입출력을 포함한 많은 기본 기능은 표준 라이브러리(standard library)에 속해 있다.
// 표준 라이브러리의 기능은 반드시 명시적으로 요청하여 사용하는 데, 이를 위해 #include 지시문(directive)를 사용한다.
// iostream은 표준 라이브러리 중에서 순차적 또는 연속적인 입출력을 지원한다.

// 모든 C++ 프로그램은 반드시 main 함수를 포함한다
int main() // 반환 타입 int, 매개변수 없음
{
    std::cout << "Hello, world!" << std::endl; // std::cout << "Hello, world!\n";
    // 표준 라이브러리의 출력 연산자(output operator) <<
    // std::로 시작하는 코드는 해당 이름이 std라는 namespace에 속해 있음을 나타냄
    // (std::cout은 '네임스테이스 std 범위에 있는 cout이라는 이름'을 의미)
    // endl은 줄 바꿈 역할을 한다.

    // 일반적으로 모든 함수는 적어도 하나의 반환문을 포함해야 하며, 함수 끝에 도달한 것이 함수의 종료를 의미하지는 않는다.
    // 반환 값은 함수가 반환할 것이라고 명시한 타입과 일치해야 한다.
    return 0; // 반환문
}