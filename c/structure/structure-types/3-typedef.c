// π« Defining a Structure Type
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

// λ€λ₯Έ μμ 
// β¨ typedef β¨ - μλ£νμ λ³λͺ μ§μ 
int main()
{
    typedef int μ μ;
    typedef float μ€μ;
    μ μ μ μλ³μ = 3;     // int i = 3;
    μ€μ μ€μλ³μ = 3.23f; // float f = 3.23f;
    printf("\n\nμ μλ³μ: %d, μ€μλ³μ %.2f\n\n", μ μλ³μ, μ€μλ³μ);

    typedef int Pair[2];
    Pair point = {3, 4}; // int point[2] = {3, 4}; κ°μ νν
    printf("(%d, %d)\n", point[0], point[1]);

    typedef char *String;
    String name = "Doodle"; // char *name = "Doodle";
    printf("μ΄λ¦: %s\n", name);

    struct Point
    {
        int x, y;
    };
    // κ°μ νν typedefλ‘ λνλ΄κΈ°
    // typedef struct {
    //      int x, y;
    // } Point;

    struct Point p;

    p.x = 3;
    p.y = 4;
    printf("(%d, %d)\n", p.x, p.y);
    printf("sizeof(p) = %d\n", sizeof(p)); // p - 8 bytes λ©λͺ¨λ¦¬ μ°¨μ§

    return 0;
}
