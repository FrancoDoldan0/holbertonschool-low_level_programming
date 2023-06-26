#include "main.h"
#include <stdio.h>

void
swap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}

void
reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		swap(&a[i], &a[n - 1 - i]);
	}
}
