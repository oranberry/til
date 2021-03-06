# **๐ A Program's Memory Layout**

- **Code Segment**  
   Program Instructions (๊ธฐ๊ณ์ด ๋ช๋ น๋ฌธ)
- **Data Segment**  
   ๋ฌธ์์ด ์์, ์ ์ญ ๋ณ์(Global(external) variables), Static ๋ณ์
- **Stack Segment**
  - ๐๐ป **Heap : Dynamically allocated memory ๋์  ๋ฉ๋ชจ๋ฆฌ ํ ๋น** ๐๐ป
  - **Stack** : Local variables ์ง์ญ ๋ณ์

# **โจ Dynamic Storage Allocation**

Data structures such as arrays are normally fixed in size. Fixed-size data structures can be a problem, since weโre forced to choose their sizes when writing a program; we can't change the sizes without modifying the program and compiling it again. With fixed-size data structures, memory needs are determined before program execution.

Fortunately, C supports **dynamic storage allocation**: the ability to allocate storage during program execution. Using dynamic storage allocation, we can design data structures that grow (and shrink) as needed. Using dynamic storage allocation, a program can obtain blocks of memory as needed during execution.

ํ๋ก๊ทธ๋๋จธ๊ฐ ์ํ๋ ์์ ์ ์ํ๋ ํฌ๊ธฐ๋งํผ ๋ฉ๋ชจ๋ฆฌ๋ฅผ ํ ๋นํ  ์ ์๋ค. ๊ทธ๋ฆฌ๊ณ  ๋ฉ๋ชจ๋ฆฌ ์ฌ์ฉ์ด ๋๋๋ฉด ์ธ์ ๋ ์ง ํ ๋นํ ๋ฉ๋ชจ๋ฆฌ ๊ณต๊ฐ์ ํด์ ํ  ์ ์๋ค. ์ด๋ฐ ํ์์ ๋ฉ๋ชจ๋ฆฌ ํ ๋น์ '๋์  ๋ฉ๋ชจ๋ฆฌ ํ ๋น'์ด๋ผ๊ณ  ํ๋ค.

heap์ ๋์ ์ผ๋ก ํ ๋นํ๋ ๋ฉ๋ชจ๋ฆฌ๋ ์คํ์ ๋นํด ํฐ ํฌ๊ธฐ์ ๋ฉ๋ชจ๋ฆฌ๋ฅผ ํ ๋นํ  ์ ์์ผ๋ฉฐ ๋ฉ๋ชจ๋ฆฌ๋ฅผ ํ ๋นํ๊ณ  ํด์ ํ๋ ์์ ๋ ํ๋ก๊ทธ๋๋จธ๊ฐ ์ง์  ์ ํ  ์ ์๋ค. ๊ทธ๋ฆฌ๊ณ  ํ ๋น๋๋ ๋ฉ๋ชจ๋ฆฌ ํฌ๊ธฐ๋ ํ๋ก๊ทธ๋จ ์คํ ์ค์ ๋ณ๊ฒฝํ  ์ ์๋ค. ๊ทธ๋์ ํ ๋น๋๋ ๋ฉ๋ชจ๋ฆฌ ํฌ๊ธฐ๊ฐ ๋ณ๊ฒฝ๋์ด๋ ์์ค ์ฝ๋๋ฅผ ๋ค์ ์ปดํ์ผ ํ์ง ์์๋ ๋๋ค.

## **โฐMemory Allocataion Functions**

To allocate storage dynamically, we'll need to call one of the three memory allocation functions declared in the <stdlib.h> header:  
`#include <stdlib.h>`

- 1๏ธโฃ **malloc** - allocates a block of memory but doesn't initialize it (**most used** ๐)
- 2๏ธโฃ calloc - allocates a block of memory and clears it
- 3๏ธโฃ realloc - resizes a previously allocated block of memory

These functions return a value of type **void \* (a "generic" pointer)** - just a memory address. The void pointer is a special type of pointer that can be pointed at objects of any data type!

malloc and the other memory allocation functions obtain memory blocks from a storage pool known as the **heap**. Calling these functions too often - or asking them for large blocks of memory - can exhaust the heap, causing the functions to return a null pointer.
