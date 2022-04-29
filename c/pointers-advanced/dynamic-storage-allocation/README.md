# **💫 Dynamic Storage Allocation**

Data structures such as arrays are normally fixed in size. Fixed-size data structures can be a problem, since we’re forced to choose their sizes when writing a program; we can't change the sizes without modifying the program and compiling it again. With fixed-size data structures, memory needs are determined before program execution.

Fortunately, C supports **dynamic storage allocation**: the ability to allocate storage during program execution. Using dynamic storage allocation, we can design data structures that grow (and shrink) as needed. Using dynamic storage allocation, a program can obtain blocks of memory as needed during execution.

## **✨ Memory Allocataion Functions ✨**

To allocate storage dynamically, we'll need to call one of the three memory allocation functions declared in the <stdlib.h> header:  
`#include <stdlib.h>`

- 1️⃣ **malloc** - allocates a block of memory but doesn't initialize it (**most used** 💟)
- 2️⃣ calloc - allocates a block of memory and clears it
- 3️⃣ realloc - resizes a previously allocated block of memory

These functions return a value of type **void \* (a "generic" pointer)** - just a memory address  
우리가 나중에 어떤 data type을 사용할 지 컴퓨터가 알 수 없기 때문에 어떤 type이든 사용할 수 있는 void \* 포인터를 사용.  
The void pointer is a special type of pointer that can be pointed at objects of any data type!

malloc and the other memory allocation functions obtain memory blocks from a storage pool known as the **heap**. Calling these functions too often - or asking them for large blocks of memory - can exhaust the heap, causing the functions to return a null pointer.

## **✨ Memory Allocation in C programs ✨**

### **➰ Automatic Allocation**

When you declare an automatic variable, such as a function argument or a local variable. Space is allocated when the compound statement (such as a function) containing the declarationn is entered, and is freed when that compound statement is exited.

### **➰ Dynamic Allocation**

Needed when the amount of memory you need depends on factors that are not known before the program runs; done by calling a memory allocation function.
