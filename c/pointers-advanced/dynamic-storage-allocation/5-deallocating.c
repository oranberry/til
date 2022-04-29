// 💫 Deallocating Storage
// Releasing blocks of dynamically allocated memeory when they're no longer needed.

// A program may allocate blocks of memory and then lose track of them, thereby wasting space
// – if this happens too often – it can exhaust the heap, causing the functions to return a null pointer.

// When a program is done with a piece of dynamically allocated memory, it should properly deallocate it.

// Losing Track of Memory
// Example:
p = malloc(...);
q = malloc(...);

p = q;
// After q is assigned to p, both variables now point to the second memory block
// There are no pointers to the first block, so we’ll never be able to use it again.

// A block of memory that’s no longer accessible to a program is said to be garbage.
// A program that leaves garbage behind has a memory leak.
// Some languages provide a garbage collector that automatically locates and recycles garbage, but C doesn’t.
// Instead, each C program is responsible for recycling its own garbage by calling the free function to release unneeded memory.

// ✨ The free Function ✨
// Prototype for free:
void free(void *ptr);

// free will be passed a pointer to an unneeded memory block:
p = malloc(...);
q = malloc(...);

free(p);
p = q;
// Calling free releases the block of memory that p points to.

// The “Dangling Pointer” Problem
// free(p) deallocates the memory block that p points to, but doesn’t change p itself.
// If we forget that p no longer points to a valid memory block, chaos may ensue:
char *p = malloc(4);
...;
free(p);
...;
strcpy(p, "abc"); /*** WRONG ***/

// Attempting to access or modifying the memory (has been freed) that p points to causes undefined behavior:
// this is called “Dangling Pointer” problem
char *p = malloc(4);
...;
free(p);
...;
strcpy(p, "abc"); /*** WRONG ***/