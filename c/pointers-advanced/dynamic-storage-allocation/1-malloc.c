// 💫 malloc 함수로 동적 메모리 할당하기
// Heap은 Stack처럼 관리되는 공간이 아니라서 변수를 선언하는 행위로 메로리를 할당할 수 없어
// malloc (memory allocation)을 사용해서 메모리를 할당해야 한다.

// 이 함수는 사용자가 size 변수에 지정한 크기만큼 heap 영역에 메모리를 할당하고 그 할당된 주소를 void *형식으로 반환해준다.

// Prototype for the malloc function:
void *malloc(size_t size);
// malloc allocates a block of size bytes and returns a pointer to it
// size_t는 unsigned int와 같은 자료형, 메모리 할당은 항상 양수로만 가능하기 때문에 음수를 고려하지 않겠다는 뜻 (defined in the library)
#include <stdlib.h>

// 함수 사용 형식:
void *p = malloc(100); // 100바이트의 메모리를 할당하여 포인터 p에 저장함

// 사용자가 malloc 함수로 100bytes 메모리를 할당하더라도 이 메모리를 2바이트(short)단위의 50개 데이터 그룹으로 사용할 지,
// 4바이트(int) 단위의 25개 그룹으로 사용할지는 예상할 수 없다. 그래서 malloc 함수가 메모리의 사용 단위를 결정하지 않고
// void * 형식으로 주소를 반환해 주는 것이다.

// No cast is necessary.
// In general, we can assign a void * value to a variable of any pointer type and vice versa.
// Nevertheless, some programmers prefer to cast malloc's return value:
short *p = (short *)malloc(100);
int *p = (int *)malloc(100);

// 50바이트 메모리를 동적으로 할당할 때 2 바이트씩 25개 그룹으로 사용하려면?
short *p = (short *)malloc(50);
// 200바이트 메모리를 동적으로 할당할 때 4 바이트씩 50개 그룹으로 사용하려면?
int *p = (int *)malloc(200);
