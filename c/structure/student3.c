// 성적표
// N명의 학생들의 수학, 영어, C언어 점수가 주어지면 수학성적 1등한 학생의 C언어 점수를 출력하는 프로그램 작성하기

// 첫 번째 줄에 50 이하의 자연수 N이 입력된다.
// 그 다음 N줄에 걸쳐 각 학생의 학생번호, 수학성적, 영어성적, C언어 성적이 차례로 입력된다.
// 학생번호는 순서대로 1부터 N이다.

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    int mat, eng, c;
};

int main()
{
    int i, n, result;
    int max = 0;
    struct Student s[51];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter the student name: ");
        scanf("%s", s[i].name);
        printf("Enter the math score: ");
        scanf("%d", &s[i].mat);
        printf("Enter the English score: ");
        scanf("%d", &s[i].eng);
        printf("Enter the c score: ");
        scanf("%d", &s[i].c);
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        if (s[i].mat > max)
        {
            max = s[i].mat;
            result = s[i].c;
        }
    }
    printf("수학 1등한 학생의 C언어 점수: %d\n", result);

    return 0;
}