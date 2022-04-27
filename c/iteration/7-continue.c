// 💫 The continue statement
// The continue statement is similar to break:
// break transfers control just past the end of a loop/swtich.
// continue transfers control to a point just before the end of the loop body.
// So the loop continues with the next iteration.

#include <stdio.h>
int main()
{
    int i, n = 0, sum = 0;

    // A loop that uses the continue statement :
    // It accepts 10 non-zero inputs and computes the sum.
    while (n < 10)
    {
        scanf("%d", &i);

        if (i == 0)
            continue;
        sum += i;
        n++;
        /* continue jumps to here */
    }

    // A loop that uses the break statement:
    n = 0;
    sum = 0;
    while (n < 10)
    {
        scanf("%d", &i);
        if (i == 0)
            break;
        sum += i;
        n++;
    }
    /* break jumps to here */
    // With break, control leaves the loop; with continue, control remains inside the loop.
    return 0;
}

// There’s another difference between break and continue:
// break can be used in switch statements and loops (while, do, and for),
// whereas continue is limited to loops.