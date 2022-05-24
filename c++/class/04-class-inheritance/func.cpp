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
// original class안의 private멤버에는 직접적으로 접근을 할 수 없다.
// 이를 해결하기 위해 멤버 초기자 리스트 사용 (ex. : Time())
NewTime::NewTime() : Time()
{
    // 남은 매개변수 설정
    day = 0;
}

NewTime::NewTime(int h, int m, int d) : Time(h, m)
{
    // 남은 매개변수 설정
    day = d;
}

void NewTime::print()
{
    std::cout << "일 : " << day << std::endl;
    show();
}