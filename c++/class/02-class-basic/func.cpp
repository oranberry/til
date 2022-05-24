#include "Stock.h"

// void Stock::acquire(string co, int n, float pr)
// {
//     name = co;
//     shares = n;
//     share_val = pr;
//     set_total();
// }

void Stock::buy(int n, float pr)
{
    shares += n;
    share_val = pr;
    set_total();
}
void Stock::sell(int n, float pr)
{
    shares -= n;
    share_val = pr;
    set_total();
}
void Stock::update(float pr)
{
    share_val = pr;
    set_total();
}
void Stock::show()
{
    cout << "회사 명 : " << name << endl;
    cout << "주식 수 : " << shares << endl;
    cout << "주가 : " << share_val << endl;
    cout << "주식 총 가치 : " << total_val << endl;
}
Stock &Stock::topval(Stock &s)
{
    if (s.share_val > share_val)
        return s;
    else
        return *this; // this pointer
}
// 사용 범위 결정 연산자 ::
Stock::Stock(string co, int n, float pr) // 생성자(constructor)
{
    name = co;
    shares = n;
    share_val = pr;
    set_total();
}
// 디폴트 생성자
Stock::Stock()
{
    name = "";
    shares = 0;
    share_val = 0;
    set_total();
}
Stock::~Stock() // 파괴자(destructor)
{
    // cout << name << "클래스가 소멸되었습니다.\n";
}

// 생성자, 파괴자는 리턴값을 가질 수 없다. 선언된 데이터형을 가지지 않는다.
// 파괴자는 매개변수를 가질 수 없다.
// 명시적으로 코드 내부에서 파괴자를 호출할 수 없다.