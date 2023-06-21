#include <stdio.h>
#include "main.h"

void
print_square(int size)
{
	int i, n;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar(35);
				_putchar('\n');
			}
		}
	}
	if (size <= 0)
		_putchar('\n');
}
