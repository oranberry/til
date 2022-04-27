// Write a function find_largest that returns the
// index of the largest value of an integer array. The function should have two parameters:
// the array and the length of the array.

#include <stdio.h>
#define N 10

int find_largest(int arr[], int n);

// find the index of the largest value in an array
// print the largest element of the array
int main()
{
	int i, index_largest;
	int a[N];

	printf("Enter %d elements for the arary: ", N);
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);

	index_largest = find_largest(a, N);
	printf("the largest value is: %d at index %d\n", a[index_largest], index_largest);

	return 0;
}

int find_largest(int arr[], int n)
{
	int i;
	int max_index = 0;
	for (i = 1; i < n; i++)
		if (arr[i] > arr[max_index])
			max_index = i;
	return max_index;
}
