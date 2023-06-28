#include <stdio.h>
#include "main.h"

void
print_diagsums(int *a, int size)
{
	int sum = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum, sum2);
}
