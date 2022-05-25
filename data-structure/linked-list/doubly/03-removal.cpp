// Removal from a Doubly Linked List
// Likewise, it is easy to remove a node v from a doubly linked list.
// Let u be the node just prior to v, and w be the node just following v. (These nodes exist, since we have sentinels.)
// To remove node v, we simply have u and w point to each other instead of to v.
// We refer to this operation as the linking out of v. We perform the following operations:
// Make w's prev linke point to u
// Make u's next link point to w
// Delete node v

void DLinkedList::remove(DNode *v)
{                       // remove node v
    DNode *u = v->prev; // predecessor
    DNode *w = v->next; // successor
    u->next = w;        // unlink v from list
    w->prev = u;
    delete v;
}

// remove from font
void DLinkedList::removeFront()
{
    remove(header->next);
}
// remove from back
void DLinkedList::removeBack()
{
    remove(trailer->prev);
}
