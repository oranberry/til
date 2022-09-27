typedef string Elem; // stack element type
class LinkedStack
{ // stack as a linked list
public:
    LinkedStack();                             // constructor
    int size() const;                          // number of items in the stack
    bool empty() const;                        // is the stack empty?
    const Elem &top() const throw(StackEmpty); // the top element
    void push(const Elem &e);                  // push element onto stack
    void pop() throw(StackEmpty);              // pop the stack

private:                 // member data
    SLinkedList<Elem> S; // linked list of elements
    int n;               // number of elements
};

// constructor
LinkedStack::LinkedStack() : S(), n(0)
{
}

// number of items in the stack
int LinkedStack::size() const
{
    return n;
}

// is the stack empty?
bool LinkedStack::empty() const
{
    return n == 0;
}

// get the top element
const Elem &LinkedStack::top() const throw(StackEmpty)
{
    if (empty())
        throw StackEmpty("Top of empty stack");
    return S.front();
}

// push element onto stack (No need for stack overflow)
void LinkedStack::push(const Elem &e)
{
    ++n;
    S.addFront(e);
}

// pop the stack
void LinkedStack::pop() throw(StackEmpty)
{
    if (empty())
    {
        // Stack Underflow
        throw StackEmpty("Pop from empty stack");
    }
    n--;
    S.removeFront();
}
