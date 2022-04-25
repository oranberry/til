// 💫 Pointers as Return Value
// We can not only pass pointers to functions
// but also write functions that return pointers.

int *max(int *a, int *b)
{
    if (*a > *b)
        return a;
    else
        return b;
}