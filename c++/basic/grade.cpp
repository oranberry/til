#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::streamsize;
using std::string;

int main()
{
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    // 중간 시험과 기말 시험의 점수 묻고 입력받기
    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;

    // 과제 점수 묻기
    cout << "Enter all your homework grades, "
            "followed by end-of-file: ";

    // 지금까지 입력된 과제 점수와 개수의 합
    int count = 0;
    double sum = 0;

    // 입력을 위한 변수
    double x;

    // 불변성: 지금까지 count개 점수를 입력받았으며 입력받은 점수의 합은 sum
    while (cin >> x)
    {
        ++count;
        sum += x;
    }

    // 결과 출력
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3) << 0.2 * midterm + 0.4 * final + 0.4 * sum / count << setprecision(prec) << endl;

    return 0;
}