// 💫 Multidimensional Arrays
// The following declaration creates a two-dimensional array (a matrix, in mathematical terminology):
int m[5][9];

// m has 5 rows and 9 columns. Both rows and columns are indexed from 0
// To access the element of m in row i, column j, we must write m[i][j].

// The expression m[i] designates row i of m, and m[i][j] then selects element j in this row.
// C stores arrays in row-major order, with row 0 first, then row 1, and so forth.

// Consider the problem of initializing an array for use as an identity matrix.
// A pair of nested for loops is perfect:
#define N 10

double ident[N][N];
int row, col;
for (row = 0; row < N; row++)
    for (col = 0; col < N; col++)
        if (row == col)
            ident[row][col] = 1.0;
        else
            ident[row][col] = 0.0;

// Initializing a Multidimensional Array
// We can create an initializer for a two-dimensional array by nesting one-dimensional initializers:
int m[5][9] = {{1, 1, 1, 1, 1, 0, 1, 1, 1},
               {0, 1, 0, 1, 0, 1, 0, 1, 0},
               {0, 1, 0, 1, 1, 0, 0, 1, 0},
               {1, 1, 0, 1, 0, 0, 0, 1, 0},
               {1, 1, 0, 1, 0, 0, 1, 1, 1}};

// If an initializer isn’t large enough to fill a multidimensional array,
// the remaining elements are given the value 0.
// The following initializer fills only the first three rows of m;
// the last two rows will contain zeros:
int m[5][9] = {{1, 1, 1, 1, 1, 0, 1, 1, 1},
               {0, 1, 0, 1, 0, 1, 0, 1, 0},
               {0, 1, 0, 1, 1, 0, 0, 1, 0}};