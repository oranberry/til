// 💫 Null Pointers
// A null pointer is a "pointer to nothing." A special value that can be distinguished from all valid pointers.
// The null pointer is represented by a macro named NULL
// The NULL macro is defined in six headers:
// <locale.h>, <stddef.h>, <stdio.h>, <stdlib.h>, <string.h>, and <time.h>

// When a memory allocation function is called,
// there's always a possibility that it won't be able to locate a block of memory large enough to satisfy our request.
// If that should happeen, the function will return ✨ a null pointer ✨.

// After we've stored the function's return value in a pointer variable,
// ⚠️❗️ we must test to see if it's a null pointer ❗️⚠️

// malloc 함수가 메모리 할당에 실패하는 경우
// 이런 경우 malloc 함수는 할당된 메모리 주소 대신 NULL 반환
// 따라서 malloc 함수가 메모리 할당에 실패하는 경우를 대비하여 다음과 같이 넘겨받은 주소가 NULL인지 체크해야한다.

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

if (NULL != p)
{
    // 메모리 할당 성공
}
else
{
    // 메모리 할당 실패
}