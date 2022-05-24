#include "struct.h"

void display(MyStruct &temp)
{
    cout << "이름: " << temp.name << endl; // 이름: Panda
    cout << "나이: " << temp.age << endl;  // 나이: 26
}