#include <stdio.h>
#include "main.h"
#include <string.h>

void
print_array(int *a, int n)
{
	for (n = 0; a[n]; n++)
	{
		printf("%d , ", n);
	}

}
