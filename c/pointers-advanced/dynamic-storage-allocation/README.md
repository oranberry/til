# **🌟 A Program's Memory Layout**

- **Code Segment**  
   Program Instructions (기계어 명령문)
- **Data Segment**  
   문자열 상수, 전역 변수(Global(external) variables), Static 변수
- **Stack Segment**
  - 👉🏻 **Heap : Dynamically allocated memory 동적 메모리 할당** 👈🏻
  - **Stack** : Local variables 지역 변수

# **✨ Dynamic Storage Allocation**

Data structures such as arrays are normally fixed in size. Fixed-size data structures can be a problem, since we’re forced to choose their sizes when writing a program; we can't change the sizes without modifying the program and compiling it again. With fixed-size data structures, memory needs are determined before program execution.

Fortunately, C supports **dynamic storage allocation**: the ability to allocate storage during program execution. Using dynamic storage allocation, we can design data structures that grow (and shrink) as needed. Using dynamic storage allocation, a program can obtain blocks of memory as needed during execution.

프로그래머가 원하는 시점에 원하는 크기만큼 메모리를 할당할 수 있다. 그리고 메모리 사용이 끝나면 언제든지 할당한 메모리 공간을 해제할 수 있다. 이런 형식의 메모리 할당을 '동적 메모리 할당'이라고 한다.

heap에 동적으로 할당하는 메모리는 스택에 비해 큰 크기의 메모리를 할당할 수 있으며 메모리를 할당하고 해제하는 시점도 프로그래머가 직접 정할 수 있다. 그리고 할당되는 메모리 크기도 프로그램 실행 중에 변경할 수 있다. 그래서 할당되는 메모리 크기가 변경되어도 소스 코드를 다시 컴파일 하지 않아도 된다.

## **➰Memory Allocataion Functions**

To allocate storage dynamically, we'll need to call one of the three memory allocation functions declared in the <stdlib.h> header:  
`#include <stdlib.h>`

- 1️⃣ **malloc** - allocates a block of memory but doesn't initialize it (**most used** 💟)
- 2️⃣ calloc - allocates a block of memory and clears it
- 3️⃣ realloc - resizes a previously allocated block of memory

These functions return a value of type **void \* (a "generic" pointer)** - just a memory address. The void pointer is a special type of pointer that can be pointed at objects of any data type!

malloc and the other memory allocation functions obtain memory blocks from a storage pool known as the **heap**. Calling these functions too often - or asking them for large blocks of memory - can exhaust the heap, causing the functions to return a null pointer.
