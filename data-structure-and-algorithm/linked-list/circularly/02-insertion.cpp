void CircleList::add(const Elem &e)
{                         // add after cursor
    CNode *v = new CNode; // create a new node
    v->elem = e;
    if (cursor == NULL)
    {                // list is empty?
        v->next = v; // v points to itself
        cursor = v;  // cursor points to v
    }
    else
    {                           // list is nonempty?
        v->next = cursor->next; // link in v after cursor
        cursor->next = v;
    }
}
