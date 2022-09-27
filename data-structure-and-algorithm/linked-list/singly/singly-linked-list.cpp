// 💫 Singly Linked Lists
// A linked list is a collection of nodes that form a linear ordering.
// Each node stores a pointer, called next, to the next node of the list.
// In addition, each node stores its associated element.
// Unlike an array, a singly linked list does not have a predetermined fixed size.
// It can be resized by adding or removing nodes.

// Example - A node in a singly linked list of strings
// The node stores two values,
// 1️⃣ the member elem stores the element stored in this node, which in this case is a character string.
// 2️⃣ The member next stores a pointer to the next node of the list.
// we make the linked list class a friend, so that it can access the node's private members.
#include <iostream>
using namespace std;

class StringNode // a node in a list of strings
{
private:
    string elem;                   // element value (character string)
    StringNode *next;              // next item in the list
    friend class StringLinkedList; // provide StringLinkedList access
};

// Define a class StringLinkedList for the actual linked list
// it supports a number of member functions, including a constructor and destructor and functions for insertion and deletion.
// Its private data consists of a pointer to the head node of the list.
class StringLinkedList
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

// The list constructor creates an empty list by setting the head pointer to NULL.
StringLinkedList::StringLinkedList() // constructor
    : head(NULL)
{
}

// The destructor repeatedly removes elements from the list.
// It exploits the fact that the function remove (presented below) destroys the node that it removes.
StringLinkedList::~StringLinkedList() // destructor
{
    while (!empty())
        removeFront();
}

// To test whether the list is empty, we simply test whether the head pointer is NULL.
bool StringLinkedList::empty() const // is list empty?
{
    return head == NULL;
}
const string &StringLinkedList::front() const // get front element
{
    return head->elem;
}