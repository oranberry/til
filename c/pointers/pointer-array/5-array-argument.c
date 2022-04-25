// Array Arguments - Pointer
// When passed to a function, an array name is treated as a pointer

void store_zeros(int a[], int n)
{
    int *p;
    for (p = a; p < a + n; p++)
        *p = 0;
}

// A call of store_zeros
store_zeros(b, N);
// This call causes a pointer to the first element of b to be assigned to a;
// the array itself isn't copied.

// An array parameter can be declared as a pointer if desired.
void store_zeros(int *a, int n)
{
    int *p;
    for (p = a; p < a + n; p++)
        *p = 0;
}

// Declaring a to be a pointer is equivalent to declaring it to be an array;
// the compiler treats the two declarations as though they were identical.
void store_zeros(int a[], int n);
void store_zeros(int *a, int n);