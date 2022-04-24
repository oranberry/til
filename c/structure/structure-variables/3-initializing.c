// 💫 Initialzing Structure Variables
// Like an array, a structure variable may be initialized at the time it's declared.
#define NAME_LEN 100
struct
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} part1 = {528, "Disk drive", 10}, part2 = {914, "Printer cable", 5};
// The values in the initializer must appear in the same order as the members of the structure.

// A structure variable can be initialized using an initializer list:
struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
};
int main()
{
    struct part part1 = {528, "Disk drive", 10};
    struct part part2 = {914, "Printer cable", 5};
    return 0;
}

// ✨ Members of a struct
// Members of a struct can be any previously defined type
// including arrays, other structs, and pointers