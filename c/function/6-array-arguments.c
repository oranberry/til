// 💫 Array Arguments
// When a function parameter is a one-dimensional array,
// the length of the array can be left unspecified:
int f(int a[]) /* no length specified */
{
    ...
}

// C doesn’t provide a way for a function to determine the length of an array passed to it.
// Instead, we’ll have to supply the length—if the function needs it—as an additional argument.

// Example:
int sum_array(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

// When sum_array is called, the first argument will be the name of an array,
// and the second will be its length:
#define LEN 100
int main(void)
{
    int b[LEN], total;
    ... total = sum_array(b, LEN);
    ...
}

// Notice that we don’t put brackets after an array name when passing it to a function:
total = sum_array(b[], LEN); /*** WRONG ***/

// Be careful not to tell a function that an array argument is larger than it really is:
total = sum_array(b, 150); /*** WRONG ***/

// sum_array will go past the end of the array, causing undefined behavior.

// A function is allowed to change the elements of an array parameter,
// and the change is reflected in the corresponding argument. For example,
void store_zeros(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = 0;
}

// A call of store_zeros:
store_zeros(b, 100);