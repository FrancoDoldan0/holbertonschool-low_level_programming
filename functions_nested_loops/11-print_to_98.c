#include <stdio.h>
#include "main.h"

void
print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = n; a < 98; a++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", a);
}
