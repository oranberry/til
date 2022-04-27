// Find largest element of an integer array entered by the user
#include <stdio.h>

int main()
{
	int i, largest, n;

	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int a[n];

	printf("Enter %d elements for the arary: ", n);

	largest = a[0];

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 1; i < n; i++)
		if (a[i] > largest)
			largest = a[i];

	printf("the largest value is: %d ", largest);

	return 0;
}
