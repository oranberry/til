// 💫 Using Pointers for Array Processing
// Pointer arithmetic allows us to visit the elements of an array
// by repeatedly incrementing a pointer variable.

// A loop that sums the elements of an array a:
#define N 10
int a[N], sum, *p;
sum = 0;
for (p = &a[0]; p < &a[N]; p++)
    sum += *p;

// The condition p < &a[N] in the for statement:
// It’s legal to apply the address operator to a[N], even though this element doesn’t exist.
// It’s safe since the loop doesn’t attempt to examine its value.
// Loop teminates when p is equal to &a[N].