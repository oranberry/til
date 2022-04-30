#include <stdio.h>
#include <stdlib.h>

int int_compare(const void *q, const void *p);

int main()
{
	int n, i;
	int *a;

	printf("Enter the length of the array: ");
	scanf("%d", &n);

	a = malloc(n * sizeof(int));

	if (a == NULL)
	{
		printf("malloc failed.");
		return 0;
	}

	for (i = 0; i < n; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &a[i]);
	}

	qsort(a, n, sizeof(int), int_compare);

	printf("In sorted order:\n");

	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);

	printf("\n");
	return 0;
}

int int_compare(const void *p, const void *q)
{
	int n1 = *(int *)p;
	int n2 = *(int *)q;

	if (n1 < n2)
	{
		return -1;
	}

	if (n1 == n2)
	{
		return 0;
	}

	return 1;
}
