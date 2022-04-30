// Deleting a Node from a Linked List
// A big advantage of storing data in a linked list is that we can easily delete nodes.

// Deleting a node involves three steps:
// 1️⃣ Locate the node to be deleted.
// 2️⃣ Alter the previous node so that it “bypasses” the deleted node.
// 3️⃣ Call free to reclaim the space occupied by the deleted node.

// The “trailing pointer” technique involves keeping a pointer
// to the previous node (prev) as well as a pointer to the current node (cur).
// Assume that list points to the list to be searched and n is the integer to be deleted.

// 1️⃣ A loop that implements step 1:
for (cur = list, prev = NULL; cur != NULL && cur->value != n; prev = cur, cur = cur->next)
    ;
// When the loop terminates, cur points to the node to be deleted and prev points to the previous node.

// 2️⃣ Next, we’ll perform the bypass required by step 2.
// The statement
prev->next = cur->next;
// makes the pointer in the previous node point to the node after the current node:

// 3️⃣ Step 3 is to release the memory occupied by the current node:
free(cur);

// If no node contains n, delete_from_list does nothing.
// In either case, the function returns a pointer to the list.

// Deleting a Node from a Linked List
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
