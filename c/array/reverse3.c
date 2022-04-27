// Reverse the elements in an array
// Key concept: swap two variables x and y

#include <stdio.h>

int main()
{
	int i, n;
	printf("Enter size of the array:");
	scanf("%d", &n);
	int a[n];
	printf("Enter elements of the array:");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int start = 0, end = n - 1;
	while (start < end)
	{
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
	printf("reverse:");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}
