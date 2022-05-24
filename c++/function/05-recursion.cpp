// 재귀호출: C++에서 함수는 자기 자신을 호출할 수 있다.
#include <iostream>
using namespace std;

void countDown(int n);

int main()
{
    countDown(5);
    return 0;
}

void countDown(int n)
{
    cout << "Counting..." << n << endl;
    if (n > 0)
        countDown(n - 1);
    cout << n << "번째 재귀함수" << endl;
}
/*
Counting...5
Counting...4
Counting...3
Counting...2
Counting...1
Counting...0
0번째 재귀함수
1번째 재귀함수
2번째 재귀함수
3번째 재귀함수
4번째 재귀함수
5번째 재귀함수
*/