// constructor from capacity
template <typename E>
ArrayStack<E>::ArrayStack(int cap) : S(new E[cap]), capacity(cap), t(-1) {}

// number of items in the stack
template <typename E>
int ArrayStack<E>::size() const
{
    return (t + 1);
}

// is the stack empty?
template <typename E>
bool ArrayStack<E>::empty() const
{
    return (t < 0);
}

// return top of stack
template <typename E>
const E &ArrayStack<E>::top() const throw(StackEmpty)
{
    if (empty())
        throw StackEmpty("Top of empty stack");
    return S[t];
}