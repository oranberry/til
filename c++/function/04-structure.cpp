// 함수와 구조체
// 1. 값으로 전달하기
// 2. 주소로 전달하기
// 구조체는 배열과 달리 직접 return 할 수 있고 매개변수의 값으로 함수에 전달할 수도 있지만,
// 구조체의 크기가 커지면 성능이 저하되기 때문에 포인터를 이용하는 것이 좋다.

#include <iostream>
using namespace std;

struct Time
{
    int hours;
    int mins;
};

const int minsPerHr = 60;

Time sum(Time *, Time *);
void showTime(Time);

int main()
{
    // 함수는 원본이 아닌 복사본을 대상으로 작업한다.

    Time day1 = {5, 45};
    Time day2 = {4, 55};

    Time total = sum(&day1, &day2);

    cout << "이틀간 소요 시간 : ";
    showTime(total);

    return 0;
}

Time sum(Time *t1, Time *t2)
{
    Time total;
    // 구조체의 값에서 member에 접근할 때는 .
    // 구조체의 주소에서 member에 접근할 때는 ->
    total.mins = (t1->mins + t2->mins) % minsPerHr;
    total.hours = t1->hours + t2->hours + (t1->mins + t2->mins) / minsPerHr;

    return total;
}

void showTime(Time t1)
{
    cout << t1.hours << "시간, " << t1.mins << "분 입니다." << endl;
}