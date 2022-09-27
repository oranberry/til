// Vector Reversal
// Using a stack to reverse elements in a vector
template <typename E>
void reverse(vector<E> &V)
{
    ArrayStack<E> S(V.size());

    // push elements onto stack
    for (int i = 0; i < V.size(); i++)
    {
        S.push(V[i]);
    }

    // pop them in reverse order
    for (int i = 0; i < V.size(); i++)
    {
        V[i] = S.top();
        S.pop();
    }
}