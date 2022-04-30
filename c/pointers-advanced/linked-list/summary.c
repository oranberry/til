// 1️⃣ a structure that represents a single node
struct node
{
    int value;         // data stored in the node
    struct node *next; // pointer to the next node
};

// 2️⃣ a variable that always points to the first node in the list:
// Setting first to NULL indicates that the list is initially empty.
struct node *first = NULL;

// 3️⃣ creating a node:
// - allocate memory for the node
// - store data in the node
// - insert the node into the list
struct node *new_node;

new_node = malloc(sizeof(struct node)); // allocate memory for the new node
new_node->value = 10;                   // Store data in the node

// two statements to insert the node into the list
new_node->next = first;
first = new_node; // first와 new_node pointer가 같은 곳을 가리킴.

// 반복
new_node = malloc(sizeof(struct node));
new_node->value = 20;
new_node->next = first;
first = new_node;
...;
...;

/******************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;         // data stored in the node
    struct node *next; // pointer to the next node
};

struct node *add_to_list(struct node *list, int n);
struct node *search_list(struct node *list, int n);
void clear_list(struct node *list);
struct node *delete_from_list(struct node *list, int n);

// Note that add_to_list doesn't modify the list pointer.
// Instead, it returns a pointer to the newly created node (now at the beginning of the list).
int main()
{
    struct node *first = NULL;
    int number, count = 0;

    // inserting nodes
    first = add_to_list(first, 10);
    first = add_to_list(first, 20);
    first = add_to_list(first, 98);

    return 0;
}

// list(a point to the first node in the old list) and n(the integer to be stored in the new node)
struct node *add_to_list(struct node *list, int n)
{
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = n;
    new_node->next = list;

    return new_node;
}
// If it finds n, the function return a pointer to the node containing n
// otherwise, it will return a null pointer
struct node *search_list(struct node *list, int n)
{
    struct node *p;

    for (p = list; p != NULL; p = p->next)
        if (p->value == n)
            return p;
    return NULL;
}

void clear_list(struct node *list)
{
    struct node *p;

    while (list != NULL)
    {
        p = list;
        list = list->next;
        if (p != NULL)
            free(p);
    }
}

struct node *delete_from_list(struct node *list, int n)
{
    struct node *cur, *prev;

    for (cur = list, prev = NULL; cur != NULL && cur->value != n; prev = cur, cur = cur->next)
        ;
    if (cur == NULL)
        return list; /* n was not found */
    if (prev == NULL)
        list = list->next; /* n is in the first node */
    else
        prev->next = cur->next; /* n is in some other node */
    free(cur);
    return list;
}