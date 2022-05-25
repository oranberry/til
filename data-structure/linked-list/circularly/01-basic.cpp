// Node Interface
typedef string Elem; // element type
class CNode
{ // circularly linked list node
private:
    Elem elem;   // linked list element value
    CNode *next; // next item in the list

    friend class CircleList; // provide CircleList access
};

// List Interface
class CircleList
{ // a circularly linked list
public:
    CircleList();              // constructor
    ~CircleList();             // destructor
    bool empty() const;        // is list empty?
    const Elem &front() const; // element at cursor
    const Elem &back() const;  // element following cursor
    void advance();            // advance cursor
    void add(const Elem &e);   // add after cursor
    void remove();             // remove node after cursor
private:
    CNode *cursor; // the cursor (points to some node of the list)
};

// Functions
CircleList::CircleList() : cursor(NULL) {}
CircleList::~CircleList()
{
    while (!empty())
        remove();
}

// is list empty?
bool CircleList::empty() const
{
    return cursor == NULL;
}

// element at cursor
const Elem &CircleList::back() const
{
    return cursor->elem;
}

// element following cursor
const Elem &CircleList::front() const
{
    return cursor->next->elem;
}

// advance cursor
void CircleList::advance()
{
    cursor = cursor->next;
}
