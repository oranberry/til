// Given a linked list of node declared as follows,
// which of the following conditions checks
// if p is pointing to the first node of the linked list named list.

struct node
{
    int number;
    struct node *next;
};

1. p == list;
// 2. p == NULL
// 3. p->next == NULL
// 4. p == list->next

// Given a linked list of node declared as follows,
// which of the following conditions checks
// if p is pointing to the last node of the linked list named list
struct node
{
    int number;
    struct node *next;
};

// 1. p==list
// 2. p==NULL
3. p->next == NULL;
// 4. p== list->next