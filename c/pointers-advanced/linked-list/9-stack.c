// 💫 Stack
// A stack, or LIFO (last in, first out) is a data structure
// that can store multiple data items of the same type.

// Stacks are used extensively at every level of a modern computer system.
// For example, a stack is used to process arithmetic expressions, for memory management, and for backtracking.

// A stack is a restricted data structure, only a small number of operations are allowed on it.
// - Push an item (add it to one end—the “stack top”)
// - Pop an item (remove it from the same end)
// - Peek an item (look at the top item without changing it)
// - Duplicate the item on the top
// - Making the stack empty

// Implementing a stack using linked list
// Stack can be implemented using an array.
// But the user is required to specify a maximum size for a stack at compile time (fixed-length array)
// or at the time it’s created (dynamically allocated array)

// If we use a linked-list implementation instead,
// there won’t be any preset limit on the size of a stack. A stack of integers using linked list:
struct node
{
    int value;
    struct node *next;
};

// Push an item into Stack
struct node *push(struct node *top, int i)
{
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("malloc failed");
        return top;
    }

    new_node->value = i;
    new_node->next = top;
    return new_node;
}
// print the stack
void print_stack(struct node *top)
{
    struct node *p;
    if (top != NULL)
    {
        for (p = top; p != NULL; p = p->next)
            printf("%d\n", p->value);
        printf("\n");
    }
    else
        printf("stack is empty\n");
}
