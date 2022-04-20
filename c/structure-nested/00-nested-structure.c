// Structures and arrays can be combined without restriction.
// Arrays may have structures as their elements, and structures may contain arrays and structures as members.

// 💫 Nested Structures
#include <string.h>
#define FIRST_NAME_LEN 20
#define LAST_NAME_LEN 10

struct person_name
{
    char first[FIRST_NAME_LEN + 1];
    char middle_initial;
    char last[LAST_NAME_LEN + 1];
};

// We can use the person_name structure as part of a larger structure:
struct student
{
    struct person_name name;
    int id, age;
    char sex;
} student1, student2;
int main()
{
    // Accessing student1's first name, middle initial, or last name
    strcpy(student1.name.first, "Fred");
    return 0;
}