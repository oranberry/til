// 💫 Defining a Structure Type
// As an alternative to declaring a structure tag, we can use typedef to define a genuine type name.
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