// The fprintf Function
// printf always writes to stdout, whereas fprintf writes to the stream indicated by its first argument:

printf("Total: %d\n", total);
/* writes to stdout */
fprintf(fp, "Total: %d\n", total);
/* writes to fp */

// A call of printf is equivalent to a call of fprintf with stdout as the first argument.

#include <stdio.h>

int main(void)
{

    char *names[] = {"Vicky Lewis", "Karen Doe", "Greg Smith"};
    int grades[] = {94, 91, 86};
    int i;

    char *file_name = "grades.txt"; /* Output file name */

    FILE *myfile = fopen(file_name, "w");

    if (myfile == NULL)
    {
        printf("Cannot open %s for output\n", file_name);
        return 1;
    }
    printf("\nWriting data to file %s\n", file_name);
    for (i = 0; i < 3; i++)
    {
        fprintf(myfile, "%s\t%d\n", names[i], grades[i]);
    }

    fclose(myfile);
    printf("Normal termination\n");
    return 0;
}
