// 💫 The qsort function
// Some of the most useful functions in the C library require a function pointer as an argument.
// One of these is qsort, which belongs to the <stdlib.h> header.
// qsort is a general-purpose sorting function that’s capable of sorting any array.

// qsort must be told how to determine which of two array elements is “smaller.”
// This is done by passing qsort a pointer to a comparison function.
// When given two pointers p and q to array elements,
// the comparison function must return an integer that is:
// Negative if *p is “less than” *q
// Zero if *p is “equal to” *q
// Positive if *p is “greater than” *q

// Prototype for qsort:
void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));
// base must point to the first element in the array (or the first element in the portion to be sorted).
// nmemb is the number of elements to be sorted.
// size is the size of each array element, measured in bytes.
// compar is a pointer to the comparison function.