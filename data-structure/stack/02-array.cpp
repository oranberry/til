// The class ArrayStack, which implements the Stack interface.
template <typename E>
class ArrayStack
{
    // default stackcapacity
    const unsigned short DEFAULT_CAPACITY = 100;

public:
    ArrayStack(int cap = DEFAULT_CAPACITY); // constructor
    int size() const;                       // number of items in the stack
    bool empty() const;                     // is the stack empty?
    const E &top() const throw(StackEmpty); // get the top element
    void push(const E &e) throw(StackFull); // push element onto
    void pop() throw(StackEmpty);           // pop from
    // ...housekeeping functions omitted
private:          // member data
    E *S;         // array of stack elements
    int capacity; // stack capacity
    int t;        // index of the top of the stack
};