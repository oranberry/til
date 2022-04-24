// 💫 Structures as Arguments
// Passing a structure to a function makes a copy of all members in the structure.

// ➰ A function with a structure argument:
#define NAME_LEN 25
#include <stdio.h>

struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} part1;

void print_part(struct part p)
{
    printf("Part number: %d\n", p.number);
    printf("Part name: %s\n", p.name);
    printf("Quantity on hand: %d\n", p.on_hand);
}

int main()
{
    struct part part1 = {528, "Hyunjung", 35};
    // A call of print_part:
    print_part(part1);
    return 0;
}
