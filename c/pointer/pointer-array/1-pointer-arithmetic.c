// 💫 Pointer Arithmetic
// When pointers point to array elements, C allows us to perform arithmetic (addition and subtraction) on the pointers,
// which leads to an alternative way of processing arrays in which pointers take the place of array subscripts

int a[10], *p;

// we can make p point to a[0] by writing:
p = &a[0];

// we can store the value 5 in a[0] by writing:
*p = 5;

// By performing pointer arithmetic (or address arithmetic) on p,
// we can access the other elements of a.
// ✨ 1. adding an integer to a pointer
// If p points to the array element a[i], then p + j points to a [i + j]
p = &a[2]; // p -> a[2]
q = p + 3; // q -> a[5]
p += 6;    // p -> a[8]

// ✨ 2. subtracting an integer from a pointer
p = *a[8]; // p -> a[8]
q = p - 3; // q -> a[5]
p -= 6;    // p -> a[2]

// ✨ 3. subtracting one pointer from another
// When one pointer is subtracted from another, the result is the distance between the pointers.
p = &a[5];
q = &a[1];

i = p - q; // i = 4
i = q - p; // i = -4

// We can compare pointers using the relational oprators (<, <=, >, >=) and the equality operators (== and !=)
// Using the relational operators to compare two pointers is meaningful only
// when both point to elements of the same array.
p = &a[5];
q = &a[1];
// the value of p <= q is 0
// the value of p >= q is 1

// 💥 주의 💥 operations that cause undefined behavior
// 1. Performing arithmetic on a pointer that doesn't point to an array element
int i, *p, *q;
p = *i;
q = p + 3; // WRONG

// 2. Subtracting pointers but they do not point to elements of the same array
int a[10], b[20];
p = &a[0];
q = &b[10];
int i = q - p; // WRONG