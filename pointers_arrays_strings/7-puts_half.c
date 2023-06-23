#include <stdio.h>
#include "main.h"
#include <string.h>

void
puts_half(char *str)
{
	int number;
	int res;

	for (number = 0; str[number]; number++)
		continue;

	number -= 1;
	res = number / 2;
	if (res % 2 != 0)
	{
		for (; res <= number; res++)
			_putchar(str[res]);
	}
	if (res % 2 == 0)
	{
		res++;
		for (; res <= number; res++)
			_putchar(str[res]);
	}
	_putchar('\n');
}
