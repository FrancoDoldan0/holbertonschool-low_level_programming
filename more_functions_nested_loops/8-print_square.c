#include <stdio.h>
#include "main.h"

void
print_square(int size)
{
	int i, n;

	if (size < 0)
	{
		for (i = 0; i < size; i++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar(32);
				_putchar(35);
			}
		}
	}
	if (size <= 0)
		_putchar('\n');
}
