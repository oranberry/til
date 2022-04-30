// Steps involved in creating a node(three steps):
// 1. Allocate memory for the node.
// 👉🏻 2. Store data in the node.
// 3. Insert the node into the list.

// Next, we’ll store data in the value member of the new node:
(*new_node).value = 10;

// To access the value member of the node, we've applied the indirection operator *
// (to reference the structure to which new_node points),
// then the selection operator .(to select a member of the structure)

// The parentheses around *new_node are mandatory
// because the . operator would otherwise take precedence over the * operator.

// 💫 The -> Operator (right arrow selection)
// Using the -> operator, we can write
new_node->value = 10; // instead of (*new_node).value = 10;

// The -> operator produces an lvalue, so we can use it wherever an ordinary variable would be allowed.
// A scanf example using the -> operator:
scanf("%d", &new_node->value);
// Notice that the & operator is still required, even though new_node is a pointer.