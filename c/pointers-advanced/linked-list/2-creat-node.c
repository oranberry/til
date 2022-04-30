// 💫 Creating a Node
// As we construct a linked list, we’ll create nodes one by one, adding each to the list.

struct node
{
    int value;         // data stored in the node
    struct node *next; // pointer to the next node
};

// Steps involved in creating a node(three steps):
// 👉🏻 1. Allocate memory for the node.
// 2. Store data in the node.
// 3. Insert the node into the list.

// When we create a node, we’ll need a variable that can point to the node temporarily,
// until it's been inserted into the list.
// Let's call this variable new_node:
struct node *new_node;

// We’ll use malloc to allocate memory for the new node,
// saving the return value in new_node:
new_node = malloc(sizeof(struct node));
// new_node now points to a block of memory just large enough to hold a node structure(value, next)

// ⚠️ Be careful to give sizeof the name of the type to be allocates,
// not the name of a pointer to that type:
new_node = malloc(sizeof(new_node)); // ❌❌❌