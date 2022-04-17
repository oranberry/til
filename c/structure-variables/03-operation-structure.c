// 💫 Operations on Structures
// Structure members are accessed by name, though, not by position.
// To access a member within a structure, we use "." operator (the dot operator)
// We write the name of the structure first, then a period, then the name of the member.
// part1.number
// part1.name
// part1.on_hand

#include <stdio.h>
#define NAME_LEN 100
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

    // Statements that display the values of part1's members:
    printf("Part number: %d\n", part1.number);
    printf("Part name: %s\n", part1.name);
    printf("Quantity on hand: %d\n", part1.on_hand);

    // changes part1's part number
    part1.number = 258;
    // increments part1's quantity on hand
    part1.on_hand++;

    // The dot operator has the same precedence as the postfix ++ and -- operators,
    // so it takes precedence over nearly all other operators
    scanf("%d", &part1.on_hand);
    // The . operator takes precedence over the & operator, so & computes the address of part1.on_hand.

    // The other major structure operation is assignment:
    part2 = part1;
    // The effect of this statement is to copy part1.number into part2.number, part1.name into part2.name, and so on.

    // 💥 주의할 점 💥
    // The = operator can be used only with structures of compatible types.
    // Two structures declared at the same time (as part1 and part2 were) are compatible.
    // Structures declared using the same "structure tag" or the same type name are also compatible.

    // Other than assignment, C provides no operations on entire structures.
    // In particular, the == and != operators can't be used with structures.

    return 0;
}
