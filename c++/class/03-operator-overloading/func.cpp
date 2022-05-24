#include "time.h"

Time::Time()
{
    hours = mins = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    mins = m;
}

void Time::addHours(int h)
{
    hours += h;
};

void Time::addMins(int m)
{
    mins += m;
    hours += mins / 60;
    mins %= 60;
};

// Time Time::sum(Time &t)
Time Time::operator+(Time &t)
{
    Time sum;
    sum.mins = mins + t.mins;
    sum.hours = hours + t.hours;
    sum.hours += sum.mins / 60;
    sum.mins %= 60;
    return sum;
};

void Time::show()
{
    std::cout << "시간 : " << hours << std::endl;
    std::cout << "분 : " << mins << std::endl;
}

Time::~Time()
{
}

// 함수를 정의할 때는 멤버함수가 아니기 때문에 사용 범위 결정 연산자를 사용하지 않는다.
// friend도 쓰지 않는다.
Time Time::operator*(int n)
{
    Time result;
    long resultMin = hours * n * 60 + mins * n;
    result.hours = resultMin / 60;
    result.mins = resultMin % 60;
    return result;
}

std::ostream &operator<<(std::ostream &os, Time &t)
{
    os << t.hours << "시간 " << t.mins << "분";
    return os;
}