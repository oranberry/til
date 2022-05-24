#include <iostream>
#ifndef TIMEH
#define TIMEH

class Time
{
private:
    int hours;
    int mins;

public:
    Time();
    Time(int, int);
    void addHours(int);
    void addMins(int);
    Time operator+(Time &);
    Time operator*(int);
    void show();
    ~Time();
    friend Time operator*(int n, Time &t)
    {
        return t * n;
    }
    friend std::ostream &operator<<(std::ostream &, Time &);
};

// 파생 클래스
// Time이라는 클래스를 original 클래스로 하여 NewTime이라는 파생 클래스를 만듬.
// 1. 파생 클래스형의 객체 안에는 기초 클래스형의 데이터 멤버들이 저장된다.
// 2. 파생 클래스형의 객체는 기초 클래스형의 메서드들을 사용할 수 있다.
// 3. 파생 클래스는 자기 자신의 생성자를 필요로 한다.
// 4. 파생 클래스는 부가적인 데이터 멤버들과 멤버 함수들을 임의로 추가할 수 있다.
class NewTime : public Time
{
private:
    int day;

public:
    NewTime();
    NewTime(int, int, int);
    void print();
};
#endif // !TIMEH