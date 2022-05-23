// Remove
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
