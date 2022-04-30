// 💫 Searching a Linked List
// A loop that visits the nodes in a linked list, using a pointer variable p to keep track of the “current” node:
for (p = list; p != NULL; p = p->next)
    ...;
// p = p->next advances the p pointer from one node to the next

// A loop of this form can be used in a function
// that searches a list(pointed to by the parameter list) for an integer n.
// If it finds n, the function will return a pointer to the node containing n;
// otherwise, it will return a null pointer.

struct node *search_list(struct node *list, int n)
{
    struct node *p;

    for (p = list; p != NULL; p = p->next)
        if (p->value == n)
            return p;
    return NULL;
}
