// 💫 Defining a Structure Type
// As an alternative to declaring a structure tag, we can use typedef to define a genuine type name.

// We could define a type named Part in the following way:
#define NAME_LEN 25
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
typedef struct
{
    char *name;
    int year;
    int price;
    char *company;

    struct Game *friendGame; // 연관 업체 게임
} GAME_INFO;

int main()
{

    GAME_INFO game2;

    game2.name = "한글 게임2";
    game2.year = "2014";

    return 0;
}
