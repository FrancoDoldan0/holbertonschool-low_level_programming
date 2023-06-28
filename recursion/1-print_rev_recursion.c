#include "main.h"

void
_print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar ('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s - 1);
}
