// 💫 The Basics of Dynamic Storage Allocation

// When a memory allocation function is called,
// there's always a possibility that it won't be able to locate a block of memory large enough to satisfy our request.
// If that should happeen, the function will return ✨ a null pointer ✨.

// 🔎 Null Pointers
// A null pointer is a "pointer to nothing." A special value that can be distinguished from all valid pointers.
// The null pointer is represented by a macro named NULL
// The NULL macro is defined in six headers:
// <locale.h>, <stddef.h>, <stdio.h>, <stdlib.h>, <string.h>, and <time.h>

// After we've stored the function's return value in a pointer variable,
// ⚠️❗️ we must test to see if it's a null pointer ❗️⚠️

// Prototype for the malloc function:
void *malloc(size_t size);
// malloc allocates a block of size bytes and returns a pointer to it
// size_t is an unsigned integer type defined in the library

// Test malloc's return value in following way:
#include <stdlib.h> // include NULL && malloc()

p = malloc(10000); // 10000 bytes of memory allocated

if (p == NULL)
{
    // allocation failed; take appropriate action
    printf("Error: malloc failed");
}

// is equivalent to
if ((p = malloc(10000) == NULL))
{
    // allocation failed; take appropriate action
    printf("Error: malloc failed");
}

// Pointers test true or false in the same way as numbers.
// All non-null pointers test true; only null pointers are false
// if (p == NULL) is equivalent to if (!p)
// if (p != NULL) is equivalent to if (p)