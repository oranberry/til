// Node Interface
typedef string Elem; // list element type
class DNode
{ // doubly linked list node
private:
    Elem elem;                // node element value
    DNode *prev;              // previous node in list
    DNode *next;              // next node in list
    friend class DLinkedList; // allow DLinkedList access
};

// List Interface
class DLinkedList
{ // doubly linked list
public:
    DLinkedList();                // constructor
    ~DLinkedList();               // destructor
    bool empty() const;           // is list empty?
    const Elem &front() const;    // get front element
    const Elem &back() const;     // get back element
    void addFront(const Elem &e); // add to front of list
    void addBack(const Elem &e);  // add to back of list
    void removeFront();           // remove from front
    void removeBack();            // remove from back
    Private :                     // local type definitions
              DNode *header;      // list sentinels
    DNode *trailer;
    Protected : // local utilities
                void
                add(DNode *v, const Elem &e); // insert new node before v
    void remove(DNode *v);                    // remove node v
};

// Functions
DLinkedList::DLinkedList()
{                       // constructor
    header = new DNode; // create sentinels
    trailer = new DNode;
    header->next = trailer; // have them point to each other
    trailer->prev = header;
}

DLinkedList::~DLinkedList()
{ // destructor
    while (!empty())
        removeFront(); // remove all but sentinels
    delete header;     // remove the sentinels
    delete trailer;
}

bool DLinkedList::empty() const
{
    return (header->next == trailer);
}
const Elem &DLinkedList::front() const
{
    return header->next->elem;
}
const Elem &DLinkedList::back() const
{
    return trailer->prev->elem;
}