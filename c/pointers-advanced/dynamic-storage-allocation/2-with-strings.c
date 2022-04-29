// 💫 Dynamically Allocated Strings
// Dynamic storage allocation is often useful for working with strings (more flexibility).
// Strings are stored in character arrays, and it can be hard to anticipate how long these arrays need to be.
// By allocating strings dynamically, we can postpone the decision until the program is running.

// ✨ Using malloc to allocate memory for a string
// The malloc function has the following prototype:
void *malloc(size_t size); // size_t is an unsigned integer type defined in the C library

// malloc allocates a block of size bytes and returns a pointer to it.
// 10000 bytes of memory allocated:
p = malloc(10000);

// To allocate space for a string of n characters:
p = malloc(n + 1);
// Because char value requires exactly one byte of storage.
// Each character requires one byte of memory; adding 1 to n leaves room for the null character.
// where p is a char * variable
// The generic pointer that malloc returns will be converted to char * when the assignment is performed;
// no case is necessary.
// ⚠️❗️ When using malloc to allocate space for a string, don't forget to include room for the null character. ❗️⚠️

// Memory allocated using malloc isn’t cleared or initialized,
// so p will point to an uninitialized array of n + 1 characters.

// Calling strcpy is one way to initialize this array:
strcpy(p, "abc");
// The first four characters in the array will now be a, b, c, and \0.