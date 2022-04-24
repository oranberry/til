// 구조체에 함수 집어넣기 (C++에서만 지원)
#include <stdio.h>

struct Time
{
    int h, m, s;
    int totalSecond()
    {
        return 3600 * h + 60 * m + s;
    }
};

int main()
{
    struct Time t = {1, 22, 48};
    // 1시간 = 60분 = 3600초
    printf("%d\n", t.totalSecond());
}