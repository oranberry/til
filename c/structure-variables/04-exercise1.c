// Given the following struct declaration and initialization,
// which condition will determine if s1 and s2 contain the same values for num and str?
#include <stdio.h>
#include <string.h>

struct s
{
    int num;
    char str[31];
};
struct s s1, s2;

// Other than assignment, C provides no operations on entire structures.
// s1 == s2; ❌❌❌❌❌

int main(void)
{

    printf("%d\n", s1.num == s2.num && s1.str == s2.str);            // 0
    printf("%d\n", s1.num == s2.num && strcmp(s1.str, s2.str));      // 0
    printf("%d\n", s1.num == s2.num && strcmp(s1.str, s2.str) == 0); // 1

    return 0;
}

// strcmp(str1, str2) return value
// if return value < 0 then it indicates str1 is less than str2
// if return value > 0 then it indicates str2 is less than str1
// if return value = 0 then it indicates str1 is equal to str2