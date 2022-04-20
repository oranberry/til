// 💫 Structures as Return Values
// Returning a structure from a function makes a copy of all members in the structure.

// ➰ A function that returns a part structure:
#include <stdio.h>
#include <string.h>
#define NAME_LEN 25

struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} part1;

struct part build_part(int number, char *name, int on_hand)
{
    struct part p;

    p.number = number;
    strcpy(p.name, name);
    p.on_hand = on_hand;
    return p;
}

int main()
{
    // A call of build_part:
    part1 = build_part(528, "Disk drive", 10);

    printf("Part number: %d\n", part1.number);
    printf("Part name: %s\n", part1.name);
    printf("Quantity on hand: %d\n", part1.on_hand);
    return 0;
}