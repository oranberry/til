// 💫 Structure Types
// We need to be define a name that represents a type of structure, not a particular structure variable.
// two ways to name structures:
// 1. structure tag
// 2. typedef
// 💥 주의 💥 Declaring a structure tag is mandatory when the structure is to be used in a linked list.

// ❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌
struct
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} part1;

struct
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} part2;
// ❌❌❌❌❌❌❌❌❌❌❌❌❌❌❌

// part1 and part2 don't have compatible types
// Since we don't have a name for the type of part1 or part2, we can't use them as arguments in function calls