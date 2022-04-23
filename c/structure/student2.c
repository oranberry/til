// N명의 학생 중 수학 성적이 가장 우수한 학생의 이름을 출력하는 프로그램 만들기

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    int mat, eng;
};

int main()
{
    struct Student s[10];
    char result[20]; // 수학성적이 가장 우수한 학생의 이름을 저장할 문자열 변수
    int i, n;
    int max = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the student name: ");
        scanf("%s", s[i].name);
        printf("Enter the Math score: ");
        scanf("%d", &s[i].mat);
        printf("Enter the English score: ");
        scanf("%d", &s[i].eng);
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        if (s[i].mat > max)
        {
            max = s[i].mat;
            strcpy(result, s[i].name);
        }
    }
    printf("The best math score is %d points. Congratulations, %s!!\n", max, result);

    return 0;
}