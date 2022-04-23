#include <stdio.h>
#include <string.h>

// 여러 기본형 데이터를 하나로 묶은 Student형 데이터 구조
struct Student
{
    char name[20];
    int mat, eng;
}; // -> 아직 메모리에 X, 데이터 형만 만든 것.

int main()
{
    struct Student s1; // 이 때 s1이라는 이름을 가진 Student형 데이터 구조가 메모리에 만들어짐.

    // a라는 문자열 배열, b라는 문자열 배열이 있을 때,
    // b 배열에 있는 문자를 a 배열에 복사하고 싶을 때 a = b ❌❌❌
    // 따라서, s1.name = "John"; -> error! ❌❌❌
    // 문자열(배열)은 대입연산자(=)로 복사할 수 없다. -> strcpy() 사용해야 함
    strcpy(s1.name, "John");
    s1.mat = 90;
    s1.eng = 95;

    printf("%s\n", s1.name);
    printf("%d\n", s1.mat);
    printf("%d\n", s1.eng);

    return 0;
}
