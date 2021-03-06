// ๐ซ Deallocating Storage
// Releasing blocks of dynamically allocated memeory when they're no longer needed.

// A program may allocate blocks of memory and then lose track of them, thereby wasting space
// โ if this happens too often โ it can exhaust the heap, causing the functions to return a null pointer.
// When a program is done with a piece of dynamically allocated memory, it should properly deallocate it.

// โ ๏ธ ๋์ ์ผ๋ก ํ ๋นํ ๋ฉ๋ชจ๋ฆฌ๋ malloc ํจ์๋ฅผ ์ฌ์ฉํ  ๋๋ถํฐ free ํจ์๋ฅผ ์ฌ์ฉํ  ๋๊น์ง ๊ณ์ Heap ์์ญ์ ํ ๋น๋์ด ์๋ค. โ ๏ธ
#include <stdlib.h>

void Test()
{
    short *p = (short *)malloc(100);
    // free(p); ์ค์๋ก ๋ฉ๋ชจ๋ฆฌ ํ ๋น์ ํด์ ํ์ง ์์์ ๋ โ
}
void main()
{
    int i;
    for (i = 0; i < 100; i++)
        Test(); // ๋ฉ๋ชจ๋ฆฌ๊ฐ 100bytes์ฉ 100๋ฒ ๋์  ํ ๋น
}

// ์ค์๋ก ๋ฉ๋ชจ๋ฆฌ ํ ๋น์ ํด์ ํ๋ free ํจ์๋ฅผ ์ฌ์ฉํ์ง ์์๋ค๋ฉด Test ํจ์๊ฐ ํธ์ถ๋  ๋๋ง๋ค heap์ 100bytes์ฉ ์ถ๊ฐ๋ก ๋ฉ๋ชจ๋ฆฌ ํ ๋น
// ๊ทธ๋ฆฌ๊ณ  Heap์ ํ ๋น๋ ์ฃผ์๋ฅผ ๊ธฐ์ตํ๊ณ  ์๋ ํฌ์ธํฐ ๋ณ์ p๋ ์ง์ญ ๋ณ์์ด๊ธฐ ๋๋ฌธ์ Test ํจ์์ ์ข๋ฃ์ ํจ๊ป ๋ฉ๋ชจ๋ฆฌ์์ ์ ๊ฑฐ๋๋ค.
// ํฌ์ธํฐ ๋ณ์ p๊ฐ ์ ๊ฑฐ๋๋ฉด ๋์  ํ ๋น๋ ๋ฉ๋ชจ๋ฆฌ์ ์ฃผ์ ๊ฐ์ ์ ์ ์๋ ๋ฐฉ๋ฒ์ด ์์ด์ ํด๋น ๋ฉ๋ชจ๋ฆฌ๋ฅผ ์ฌ์ฉํ  ์๋ ์๊ณ  ํด์ ํ  ์๋ ์๋ค. -> ๋ฉ๋ชจ๋ฆฌ ์์ค (garbage)
// ๐ฅ malloc ํจ์๋ฅผ ์ฌ์ฉํ์ฌ ๋์  ํ ๋น ํ๋ ๊ฒฝ์ฐ์๋ free ํจ์๋ก ํ ๋น๋ ๋ฉ๋ชจ๋ฆฌ๋ฅผ ํด์ ํ๋ ์ฝ๋๋ฅผ ๋จผ์  ์์ ์ ์ฝ๋์ ์ถ๊ฐํด๋๊ณ  ์์ํ๋ ๊ฒ์ด ์ข๋คโ๏ธโ๏ธ

// โ ๏ธ Losing Track of Memory
p = malloc(...);
q = malloc(...);

p = q; // โ
// After q is assigned to p, both variables now point to the second memory block
// There are no pointers to the first block, so weโll never be able to use it again.

// A block of memory thatโs no longer accessible to a program is said to be "garbage."
// A program that leaves garbage behind has "a memory leak."
// Some languages provide a garbage collector that automatically locates and recycles garbage, but C doesnโt.
// Instead, each C program is responsible for recycling its own garbage by calling the "free function" to release unneeded memory.

// โจ The free Function
// Prototype for free:
void free(void *ptr);

// free will be passed a pointer to an unneeded memory block:
p = malloc(...);
q = malloc(...);

free(p);
p = q; // โญ๏ธ
// Calling free releases the block of memory that p points to.

// โ ๏ธ The โDangling Pointerโ Problem
// A dangling pointer is a pointer that points to invalid data or to data which is not valid anymore
// free(p) deallocates the memory block that p points to, but doesnโt change p itself.
// If we forget that p no longer points to a valid memory block, chaos may ensue:
char *p = malloc(4);
...;
free(p);
...;
strcpy(p, "abc"); /*** WRONG ***/

// Attempting to access or modifying the memory (has been freed) that p points to causes undefined behavior:
// this is called โDangling Pointerโ problem
char *p = malloc(4);
...;
free(p);
...;
strcpy(p, "abc"); /*** WRONG ***/

// ํ ๋น๋์ง๋ ์์ ๋ฉ๋ชจ๋ฆฌ๋ฅผ ํด์ ํ๋ ๊ฒฝ์ฐ -> ์ปดํ์ผ์ ์ฑ๊ณตํด๋ ์คํํ  ๋ ์ค๋ฅ ๋ฐ์.
// ์ ์ ์ผ๋ก ํ ๋น๋ ๋ฉ๋ชจ๋ฆฌ๋ฅผ ํด์ ํ๋ ๊ฒฝ์ฐ -> heap์ ํ ๋น๋ ์ฃผ์๊ฐ ์๋๊ธฐ ๋๋ฌธ์ ์ค๋ฅ ๋ฐ์
// ํ ๋น๋ ๋ฉ๋ชจ๋ฆฌ๋ฅผ ๋ ๋ฒ ํด์ ํ๋ ๊ฒฝ์ฐ -> ์ค๋ฅ ๋ฐ์