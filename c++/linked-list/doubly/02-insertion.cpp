// Insert
// insert new node before v
void DLinkedList::add(DNode *v, const Elem &e)
{
    DNode *u = new DNode;
    u->elem = e;       // create new node for e
    u->next = v;       // link u in between v
    u->prev = v->prev; // ...and v->prev
    v->prev->next = v->prev->u;
}

// add to front of list
void DLinkedList::addFront(const Elem &e)
{
    add(header->next, e);
}

// add to back of list
void DLinkedList::addBack(const Elem &e)
{
    add(trailer, e);
}
