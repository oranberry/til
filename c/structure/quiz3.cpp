// 3. 2번 코드에서 pSwap 함수를 Point 구조체에 집어넣기
// 구조체 안에 함수 넣기 (c++에서만 지원)
#include <stdio.h>

struct Point
{
    int x, y;
    void pSwap()
    {
        // x 좌표와 y좌표를 교환
        int temp = x;
        x = y;
        y = temp;
    }
};

int main()
{
    struct Point pos = {3, 4};

    pos.pSwap();

    printf("(%d, %d)\n", pos.x, pos.y);
}