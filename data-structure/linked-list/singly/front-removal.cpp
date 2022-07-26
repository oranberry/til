// 💫 Removal from the front of a singly linked list
// We essentially undo the operations performed for insertion.
// We first save a pointer to the old head node and advance the head pointer to the next node in the list.
// then delete the old head node.

// We assume that the user has checked that the list is nonempty before applying this operation.
// The function deletes the node in order to avoid any memory leaks.
// We do not return the value of the deleted node.
// If its value is desired, we can call the front function prior to the removal.

void StringLinkedList::removeFront() // remove front item
{
    StringNode *old = head; // save current head
    head = old->next;       // skip over old head
    delete old;             /// delete the old head
}

// It is noteworthy that we cannot as easily delete the last node of a singly linked list, even if we had a pointer to it.
// In order to delete a node, we need to update the next link of the node immediately preceding the deleted node.
// Locating this node involves traversing the entire list and could take a long time.