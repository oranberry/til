// 💫 Deallocating Storage - free 함수로 할당된 메모리 해제하기
// Heap에 할당한 메모리는 프로그램이 끝날 때까지 자동으로 해제되지 않는다.
// 사용하던 메모리가 해제되지 않으면 Heap에 메모리를 할당할 공간이 부족해질 수 있다.
// 따라서 다음과 같이 free 함수를 사용하여 Heap에 할당했던 메모리를 명시적으로 해제해주어야 한다.
// free(p);

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char *p_name;
    p_name = (char *)malloc(32); // 32바이트 메모리 동적 할당

    if (p_name != NULL)
    {
        // 메모리 할당에 성공한 경우
        printf("Your name: ");
        gets(p_name);

        printf("Hi~ %s\n", p_name);
        free(p_name); // 포인터 변수 p_name에 동적 할당된 메모리 해제
    }
    else
    {
        // 메모리 할당에 실패한 경우
        printf("Memory Allocation error!!\n");
    }
}
