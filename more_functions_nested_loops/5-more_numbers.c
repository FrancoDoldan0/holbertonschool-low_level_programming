#include <stdio.h>
#include "main.h"

void
more_numbers(void)
{
	int n;

	for (n = 0; n <= 14; n++)
	{
		char x = 'a';

		while (x <= 'n')
		{
			_putchar(x);
			x++;
		}
		if (n > 9)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
			putchar(n + '0');
	}

}
