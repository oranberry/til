// 💫 Structures as Arguments and Return Values
// Functions may have structures as arguments and return values.

// Passing a structure to a function and returning a structure from a function
// both make a copy of all members in the structure.

// ➰ A function with a structure argument:
void print_part(struct part p)
{
    print("Part number: %d\n", p.number);
    print("Part name: %s\n", p.name);
    print("Quantity on hand: %d\n", p.on_hand);
}
// A call of print_part:
print_part(part1);

// ➰ A function that returns a part structure:
struct part build_part(int number, char *name, int on_hand)
{
    struct part p;

    p.number = number;
    strcpy(p.name, name);
    p.on_hand = on_hand;
    return p;
}
// A call of build_part:
part1 = build_part(528, "Disk drive", 10);
