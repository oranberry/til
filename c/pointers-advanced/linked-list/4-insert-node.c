// Steps involved in creating a node(three steps):
// 1. Allocate memory for the node.
// 2. Store data in the node.
// 👉🏻 3. Insert the node into the list.

// 💫 Inserting a Node at the Beginning of a Linked List
// One of the advantages of a linked list is that nodes can be added at any point in the list:
// at the beginning, at the end, or anywhere in the middle

// However, the beginning of a list is the easiest place to insert a node.
// if new_node is pointing to the node to be inserted,
// and first is pointing to the first node in the linked list,
// then we'll need two statements to insert the node into the list.

// 1️⃣ modify the new_node's next member to point to the node that was previously at the beginning of the list:
new_node->next = first;
// 2️⃣ make first point to the new node:
first = new_node;
// These statements work even if the list is empty.

// A function that inserts a node containing n into a linked list, which pointed to by list:
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
// Main function that calls add_to_list
int main()
{
    struct node *first = NULL;
    int number, couunt = 0;

    // inserting nodes
    first = add_to_list(first, 10);
    first = add_to_list(first, 20);
    first = add_to_list(first, 98);
    return 0;
}
// Note that add_to_list returns a pointer to the newly created node (now at the beginning of the list).
// When we call add_to_list, we’ll need to store its return value into first:
first = add_to_list(first, 10);
first = add_to_list(first, 20);
// These statements add nodes containing 10 and 20 to the list pointed to by first.

// The following function uses add_to_list
// to create a linked list containing numbers entered by the user:
struct node *read_numbers(void)
{
    struct node *first = NULL;
    int n;

    printf("Enter a series of integers (0 to terminate): ");
    for (;;)
    {
        scanf("%d", &n);
        if (n == 0)
            return first;
        first = add_to_list(first, n);
    }
}
// The numbers will be in reverse order within the list,
// since first always points to the node containing the last number entered.

// ⚠️⚠️ Getting add_to_list to update first directly,
// rather than return a new value for first, turns out to be tricky.
// Suppose we add the statement
list = new_node;
// instead of  return new_node;
// Will not work because pointers, like all arguments, are passed by value,
// so first in the add_to_list function is a local variable.
// Updating a local variable does not update first