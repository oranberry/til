// Implementing a Generic Singly Linked List
// It is easy to convert the implementation so that it works for an arbitrary element type through the use of C++’s template mechanism.
// The resulting generic singly linked list class is called SLinkedList.

// We begin by presenting the node class, called SNode.
// The element type associated with each node is parameterized by the type variable E.
// references to the data type “string” have been replaced by “E.”
// When referring to our templated node and list class, we need to include the suffix “<E>.”
// For example, the class is SLinkedList<E> and the associated node is SNode<E>.

// A node in a generic singly linked list.
template <typename E>
class SNode // singly linked list node
{
private:
    E elem;                      // linked list element value
    SNode<E> *next;              // next item in the list
    friend class SLinkedList<E>; // provide SLinkedList access
};

// To keep things simple, we have omitted housekeeping functions such as a copy constructor.
// A class definition for a generic singly linked list
template <typename E>
class SLinkedList // a singly linked list
{
public:
    SLinkedList();             // empty list constructor
    ~SLinkedList();            // destructor
    bool empty() const;        // is list empty?
    const E &front() const;    // return front element
    void addFront(const E &e); // add to front of list
    void removeFront();        // remove front item list
private:
    SNode<E> *head; // head of the list
};

// Observe that each definition is prefaced by the template specifier template <typename E>.
// Other member functions for a generic singly linked list.
// constructor
template <typename E>
SLinkedList<E>::SLinkedList() : head(NULL) {}

// is list empty?
template <typename E>
bool SLinkedList<E>::empty() const
{
    return head == NULL;
}

// return front element
template <typename E>
const E &SLinkedList<E>::front() const
{
    return head->elem;
}

// destructor
template <typename E>
SLinkedList<E>::~SLinkedList()
{
    while (!empty())
        removeFront();
}

template <typename E>
void SLinkedList<E>::addFront(const E &e) // add to front of list
{
    SNode<E> *v = new SNode<E>; // create new node
    v->elem = e;                // store data
    v->next = head;             // head now follows v
    head = v;                   // v is now the head
}
template <typename E>
void SLinkedList<E>::removeFront() // remove front item
{
    SNode<E> *old = head; // save current head
    head = old->next;     // skip over old head
    delete old;           // delete the old head
}