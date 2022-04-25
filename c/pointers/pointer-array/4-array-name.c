// 💫 Using an Arrsy Name as a Pointer
// Another key relation between pointers and array:
// The name of an array can be used as a pointer to the first element in the array.
// This relationship simplifies pointer arithmetic and makes both arrays and pointers more versatile.

// Suppose that a is declared as follows:
int a[10];

// Using a as a pointer to the first element in the array, we can modify a[0]:
*a = 7; // stores 7 in a[0]

// we can modify a[1] through the pointer a+1:
*(a + 1) = 12; // stores 12 in a[1]

// In general, a + i is the same as &a[i]
// *(a+i) is equivalent to a[i]
// In other words, array subscripting can be viewed as a form of pointer arithmetic
// It's easier to write loops that step through an array using array name as a pointer:
for (p = &a[0]; p < &a[N]; p++)
    sum += *p;

// simplified version:
for (p = a; p < a + N; p++)
    sum += *p;

// Although an array name can be used as a pointer, it's not possible to assign it a new value.
// Attempting to make it point elsewhere is an error:
while (*a != 0)
    a++; // WRONG

// We can always copy a into a pointer variable, then change the pointer variable:
p = a;
while (*p != 0)
    p++;