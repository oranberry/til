// 💫 Declaring Structure Variables
// A structure tag is a name used to identify a paricular kind of structure
// The declaration of a structure tag named part:
#define NAME_LEN 100

struct part // part - tag name
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} part2, part2; // a semicolon must follow the right brace
// Each structure variable has three members: number (the part number), name(the name of the part), and on_hand (the quantity on hand)
// The members of a structure are stored in memory in the order in which they're declared.

// The part tag can be used to declare variables:
struct part part1, part2;

// We can't drop the word struct:
// ❌ part part1, part 2; ❌
// part isn't a type name; without the word struct, it is meaningless

// Each structure represents a new scope; any names declared in that scope won't conflict with other names in a program.
struct
{
    char name[NAME_LEN + 1];
    int number;
    char sex;
} employee1, employee2;
// The number and name memebers in the part1 and part2 structures don't conflict with the number and name members in employee1 and employee2
