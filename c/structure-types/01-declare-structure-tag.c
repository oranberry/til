// 💫 Declaring a Structure Tag
// A structure tag is a name used to identify a particular kind of structure.

// The following example declares a structure tag named part:
#define NAME_LEN 25
struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
};
// semicolon must be present to terminate the declaration
// Accidentally omitting the semicolon at the end of a structure declaration can cause surprising errors.

// Once we've created the part tag, we can use it to declare variables:
struct part part1, part2;

// Unfortunately, we can't abbreviate this declaration by dropping the word struct:
// part part1, part2; ❌❌❌
// part isn't a type name without the word struct.

// The rdeclaration of a structure tag can be combined with the declaration of structure variables:
struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} part1, part2;

// All structues declared to have type struct part are compatible with one another:
struct part part1 = {528, "Disk drive", 10};
struct part part2;

part2 = part1; // legal, both parts have the same type