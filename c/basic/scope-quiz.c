// In a C program, the same identifier may have several different meanings.

// The most important scope rule: When a declaration inside a block names an identifier that’s already visible,
// the new declaration temporarily “hides” the old one, and the identifier takes on a new meaning.
// At the end of the block, the identifier regains its old meaning.

int i;        /* Declaration 1 */
void f(int i) /* Declaration 2 */
{
    i = 1;
}
void g(void)
{
    int i = 2; /* Declaration 3 */
    if (i > 0)
    {
        int i; /* Declaration 4 */
        i = 3;
    }
    i = 4;
}
void h(void)
{
    i = 5;
}

// In the previous example, the identifier i has four different meanings:
// In Declaration 1, i is a variable with static storage duration and file scope.
// In Declaration 2, i is a parameter with block scope.
// In Declaration 3, i is an automatic variable with block scope.
// In Declaration 4, i is also automatic and has block scope.

// C’s scope rules allow us to determine the meaning of i each time it’s used