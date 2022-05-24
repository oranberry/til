#include <iostream>
#ifndef TIMEH
#define TIMEH

// c++ friend
// friend로 만들면 friend함수는 class의 member들이 가지는 것과 동등한 접근 권한을 갖는다.
// 즉, public 영역에 정의되어 있는 멤버 함수들 처럼 friend 함수는 private 변수에 접근할 수 있게 됨.
// 이항 연산자: 두 개의 피연산자를 요구하는 연산자

class Time
{
private:
    int hours;
    int mins;

public:
    Time();         // 매개변수가 없을 때
    Time(int, int); // 매개변수를 지정해주었을 때 (오버로딩)
    void addHours(int);
    void addMins(int);
    // Time sum(Time &);
    Time operator+(Time &);
    Time operator*(int);
    void show();
    ~Time();
    // 1. 클래스안에 선언되었지만 멤버가 아님 -> 호출할 때 사용했던 .이나 -> 사용할 수 없음.
    // 2. 멤버함수는 아니지만 멤버함수와 등등한 접근 권한을 가짐
    friend Time operator*(int n, Time &t)
    {
        return t * n;
    }
    // <<연산자 오버 로딩
    friend std::ostream &operator<<(std::ostream &, Time &);
}

#endif // TIMEH