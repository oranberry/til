// What is the output if the value of grade is 3?
#include <stdio.h>
int main()
{
    int grade = 3;
    switch (grade)
    {
    case 4:
        printf("Excellent");
    case 3:
        printf("Good");
    case 2:
        printf("Average");
    case 1:
        printf("Poor");
    case 0:
        printf("Failing");
    default:
        printf("Illegal grade");
    }
    return 0;
}

// GoodAveragePoorFailingIllegal grade
