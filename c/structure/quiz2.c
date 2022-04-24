// 2. pSwap 함수 완성하기
#include <stdio.h>

struct Point
{
    int x, y;
};

void pSwap(struct Point *p)
{
    // x 좌표와 y좌표를 교환
    int temp = p->x;
    p->x = p->y;
    p->y = temp;
}

int main()
{
    struct Point pos = {3, 4};

    pSwap(&pos);

    printf("(%d, %d)\n", pos.x, pos.y);
}