// 구조체 안에 함수 넣기 (c++에서만 지원)
#include <stdio.h>

struct Point
{
    int x, y;

    void moveRight()
    {
        x++;
    }
    void moveLeft()
    {
        x--;
    }
    void moveUp()
    {
        y++;
    }
    void moveDown()
    {
        y--;
    }
};

int main()
{
    struct Point p = {2, 5};

    p.moveDown();
    p.moveRight();

    printf("(%d, %d)\n", p.x, p.y);
}