// 💫 Pseudocode of Insertion Sort Algorithm
// Input: An array A of n comparable elements
// Output: The array A with elements rearranged in non-decreasing order

void insertion_sort(int *A, int n)
{
    for (int i = 1; i < n; i++)
    {
        int item = A[i];
        int j = i - 1;
        while ((j >= 0) && (A[j] > item))
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = item;
    }
}