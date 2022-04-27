// Write a program that calculates the row sums for each row and the column sums for each column
// for the following two-dimensional array:
// int m[2][3] = {{9, 7, 4},
//        		{20, 15, 3}};
// row_sum: 20, 38
// col_sum: 29, 22, 7

#include <stdio.h>
#define N 3
#define M 2
int main()
{

	int a[M][N] = {{9, 7, 4}, {20, 15, 3}};
	int row, column, row_total[M] = {0}, column_total[N] = {0};

	for (row = 0; row < M; row++)
	{
		for (column = 0; column < N; column++)
		{
			row_total[row] += a[row][column];
		}
		printf("row total for row %d is %d \n", row, row_total[row]);
	}

	for (column = 0; column < N; column++)
	{
		for (row = 0; row < M; row++)
		{
			column_total[column] += a[row][column];
		}
		printf("column total for column %d is %d\n", column, column_total[column]);
	}
	return 0;
}
