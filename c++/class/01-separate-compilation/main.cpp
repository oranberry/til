#include "struct.h"
// 헤더 파일을 여러 파일에 포함시킬 때 반드시 단 한 번만 포함시켜야 한다.
// 만약 다른 헤더 파일에서 struct.h을 포함하고 있을 떄 -> 중복!
// 이러한 불상사를 막기위해서 #ifndef (if not define) ~ #endif 지원한다.

int main()
{
    MyStruct PandaCoding = {
        "Panda",
        26,
    };

    display(PandaCoding);
    return 0;
}