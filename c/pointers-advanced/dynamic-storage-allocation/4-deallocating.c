// 💫 Deallocating Storage
// Releasing blocks of dynamically allocated memeory when they're no longer needed.

// A program may allocate blocks of memory and then lose track of them, thereby wasting space
// – if this happens too often – it can exhaust the heap, causing the functions to return a null pointer.
// When a program is done with a piece of dynamically allocated memory, it should properly deallocate it.

// ⚠️ 동적으로 할당한 메모리는 malloc 함수를 사용할 때부터 free 함수를 사용할 때까지 계속 Heap 영역에 할당되어 있다. ⚠️
#include <stdlib.h>

void Test()
{
    short *p = (short *)malloc(100);
    // free(p); 실수로 메모리 할당을 해제하지 않았을 때 ❌
}
void main()
{
    int i;
    for (i = 0; i < 100; i++)
        Test(); // 메모리가 100bytes씩 100번 동적 할당
}

// 실수로 메모리 할당을 해제하는 free 함수를 사용하지 않았다면 Test 함수가 호출될 때마다 heap에 100bytes씩 추가로 메모리 할당
// 그리고 Heap에 할당된 주소를 기억하고 있는 포인터 변수 p는 지역 변수이기 때문에 Test 함수의 종료와 함께 메모리에서 제거된다.
// 포인터 변수 p가 제거되면 동적 할당된 메모리의 주소 값을 알 수 있는 방법이 없어서 해당 메모리를 사용할 수도 없고 해제할 수도 없다. -> 메모리 손실 (garbage)
// 💥 malloc 함수를 사용하여 동적 할당 하는 경우에는 free 함수로 할당된 메모리를 해제하는 코드를 먼저 자신의 코드에 추가해놓고 작업하는 것이 좋다❗️❗️

// ⚠️ Losing Track of Memory
p = malloc(...);
q = malloc(...);

p = q; // ❌
// After q is assigned to p, both variables now point to the second memory block
// There are no pointers to the first block, so we’ll never be able to use it again.

// A block of memory that’s no longer accessible to a program is said to be "garbage."
// A program that leaves garbage behind has "a memory leak."
// Some languages provide a garbage collector that automatically locates and recycles garbage, but C doesn’t.
// Instead, each C program is responsible for recycling its own garbage by calling the "free function" to release unneeded memory.

// ✨ The free Function
// Prototype for free:
void free(void *ptr);

// free will be passed a pointer to an unneeded memory block:
p = malloc(...);
q = malloc(...);

free(p);
p = q; // ⭕️
// Calling free releases the block of memory that p points to.

// ⚠️ The “Dangling Pointer” Problem
// A dangling pointer is a pointer that points to invalid data or to data which is not valid anymore
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

// 할당되지도 않은 메모리를 해제하는 경우 -> 컴파일은 성공해도 실행할 때 오류 발생.
// 정적으로 할당된 메모리를 해제하는 경우 -> heap에 할당된 주소가 아니기 때문에 오류 발생
// 할당된 메모리를 두 번 해제하는 경우 -> 오류 발생