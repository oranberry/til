#ifndef STOCK
#define STOCK
#include <iostream>

using namespace std;

class Stock
{
    // private: 비공개 멤버 (클래스 내에서만 접근 가능)
    // private member들의 값을 변경하려면 반드시 public 함수들을 통해서 값을 변경해야 한다.
    // 직접적인 data는 private로 선언해서 데이터를 은닉한다.
private:
    string name;
    int shares;
    float share_val; // 변경하기 위해서는 void update 함수 사용
    double total_val;
    void set_total() { total_val = shares * share_val; }

    // public: 공개 멤버, 클래스 (외부에서도 접근 가능)
public:
    // void acquire(string, int, float);
    Stock();
    Stock(string, int, float);
    void buy(int, float);
    void sell(int, float);
    void update(float);
    Stock &topval(Stock &);
    void show();
    ~Stock();
};
#endif // !STOCK