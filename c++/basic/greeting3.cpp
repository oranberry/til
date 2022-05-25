#include <iostream>
#include <string>

// 표준 라이브러리에서 가져와서 사용할 이름을 언급
// using 선언 (using-declaration)
// ex. cout라는 기능을 std::cout와 같은 의미로 사용할 것이고, cout라는 이름을 갖는 무엇도 정의하지 않을 것이라는 약속
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // 이름 묻기
    cout << "Please enter your first name: ";

    // 이름 입력
    string name;
    cin >> name;

    // 출력 메시지 구성
    const string greeting = "Hello, " + name + "!";

    // 인사말을 둘러싼 공백의 개수
    const int pad = 1;

    // 출력할 행과 열의 개수
    // 👉🏻 pad를 사용하여 출력할 행의 전체 개수를 제어하는 상수 rows 값 계산
    // 👉🏻 ::는 범위 연산자
    // string이라는 클래스에 속한 size_type이라는 기능을 사용하겠다는 의미
    // 문자열 길이는 음수가 될 수 없다. 따라서 std::string::size_type은 부호 없는 타입
    // 부호 없는 타입의 객체는 음수값을 포함할 수 없다.
    // 행의 해당 개수는 인사말의 길이에 두 번의 공백과 별표 2개를 더해서 계산할 수 있다.
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    // 입력과 출력을 구분하기 위해 한 행 건너뜀
    cout << endl;

    // rows개 행을 출력
    for (int r = 0; r != rows; ++r)
    {
        string::size_type c = 0;

        while (c != cols)
        {
            // 인사말 출력 여부 판별
            // 행 위치는 별표만으로 이루어진 첫 번째 열의 다음 열부터 pad만큼의 공백을 더해서 찾을 수 있다.
            if (r == pad + 1 && c == pad + 1)
            {
                cout << greeting;
                c += greeting.size(); // c = c + greeting.size() (compound-assignment)
            }
            else
            {
                // 테두리에 출력 여부 판별
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                    cout << "*";
                // 나머지 공백 출력
                else
                    cout << " ";
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}
