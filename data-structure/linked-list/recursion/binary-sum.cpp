// Algorithm BinarySum(A,i,n):
// Input: An array A, integer i, integer n
// Output: Sum of n integers in A starting at index i

if (n = 1)
{
    return A[i]
}

return BinarySum(A, i, ceil(n / 2)) + BinarySum(A, i + ceil(n / 2), floor(n / 2));

// We label each box with the values of parameters i
// and n, which represent the starting index and
// length of the  sequence of elements to be summed,
// respectively
