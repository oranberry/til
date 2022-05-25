// Insertion into a Doubly Linked List
// Because of its double link structure, it is possible to insert a node at any position within a doubly linked list.
// Given a node v of a doubly linked list (which could possibly be the header, but not the trailer),
// let z be a new node that we wish to insert immediately after v.
// Let w the be node following v, that is, w is the node pointed to by v’s next link. (This node exists, since we have sentinels.)
// To insert z after v, we link it into the current list, by performing the following operations:
// Make z’s prev link point to v
// Make z’s next link point to w
// Make w’s prev link point to z
// Make v’s next link point to z

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
