// 💫 Defining a Structure Type
// As an alternative to declaring a structure tag, we can use typedef to define a genuine type name.
#include <stdio.h>
#define NAME_LEN 25

// We could define a type named Part in the following way:
typedef struct
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} Part; // the name of the type, Part, must come at the end, not after the word struct

// declare variables
Part part1, part2;

// since Part is a typedef name, we're not allowed to write struct Part.
// All Part variables, regardless of where they're declared, are compatible.

// When it comes time to name a structure, we can usually choose either to declare a structure tag or to use typedef.
// However, declaring a structure tag is mandatory when the structure is to be used in a linked list.

// 다른 예제
// ✨ typedef ✨ - 자료형에 별명 지정
int main()
{
    typedef int 정수;
    typedef float 실수;
    정수 정수변수 = 3;     // int i = 3;
    실수 실수변수 = 3.23f; // float f = 3.23f;
    printf("\n\n정수변수: %d, 실수변수 %.2f\n\n", 정수변수, 실수변수);

    typedef int Pair[2];
    Pair point = {3, 4}; // int point[2] = {3, 4}; 같은 표현
    printf("(%d, %d)\n", point[0], point[1]);

    typedef char *String;
    String name = "Doodle"; // char *name = "Doodle";
    printf("이름: %s\n", name);

    struct Point
    {
        int x, y;
    };
    // 같은 표현 typedef로 나타내기
    // typedef struct {
    //      int x, y;
    // } Point;

    struct Point p;

    p.x = 3;
    p.y = 4;
    printf("(%d, %d)\n", p.x, p.y);
    printf("sizeof(p) = %d\n", sizeof(p)); // p - 8 bytes 메모리 차지

    return 0;
}
