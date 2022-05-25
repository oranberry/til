// A node in a singly linked list of strings.
// The node stores two values,
// 1️⃣ the member elem stores the element stored in this node, which in this case is a character string.
// 2️⃣ The member next stores a pointer to the next node of the list.
// we make the linked list class a friend, so that it can access the node's private members.

class StringNode // a node in a list of strings
{
private:
    string elem;                   // element value
    StringNode *next;              // next item in the list
    friend class StringLinkedList; // provide StringLinkedList access
};

// Define a class StringLinkedList for the actual linked list
// it supports a number of member functions, including a constructor and destructor and functions for insertion and deletion.
// Its private data consists of a pointer to the head node of the list.
class StringLinkedList // a linked list of strings
{
public:
    StringLinkedList();             // empty list constructor
    ~StringLinkedList();            // destructor
    bool empty() const;             // is list empty?
    const string &front() const;    // get front element
    void addFront(const string &e); // add to front of list
    void removeFront();             // remove front item list

private:
    StringNode *head; // pointer to the head of list
};

// Some simple member functions of class StringLinkedList.
// The list constructor creates an empty list by setting the head pointer to NULL
// The destructor repeatedly removes element from the list.
// It exploits the fact that the function remove destorys the node that it removes.
// To test whether the list is empty, we simply test whether the head pointer is NULL.
StringLinkedList::StringLinkedList() // constructor
    : head(NULL)
{
}

StringLinkedList::~StringLinkedList() // destructor
{
    while (!empty())
        removeFront();
}

bool StringLinkedList::empty() const // is list empty?
{
    return head == NULL;
}
const string &StringLinkedList::front() const // get front element
{
    return head−> elem;
}