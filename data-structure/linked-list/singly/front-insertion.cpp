// 💫 Insertion to the Front of a Singly Linked List
// We can easily insert an element at the head of a singly linked list
// We first create a new node, and set its elem value to the desired string
// and set its next link to point to the current head of the list.
// We then set head to point to the new node.

void StringLinkedList::addFront(const string &e) // add to front of lit
{
    StringNode *v = new StringNode; // create new node
    v->element = e;                 // store data
    v->next = head;                 // head now follows v
    head = v;                       // v is now the head
}
// Note that access to the private members elem and next of the StringNode class would normally be prohibited,
// but it is allowed here because StringLinkedList was declared to be a friend of StringNode.
