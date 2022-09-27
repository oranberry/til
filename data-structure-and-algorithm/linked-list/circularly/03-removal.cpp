void CircleList::remove()
{                              // remove node after cursor
    CNode *old = cursor->next; // the node being removed
    if (old == cursor)         // removing the only node?
        cursor = NULL;         // list is now empty
    else
        cursor->next = old->next; // link out the old node
    delete old;                   // delete the old node
}
