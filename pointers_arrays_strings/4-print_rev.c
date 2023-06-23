#include "main.h"

void
print_rev(char *s)
{
	int var;

	for (var = 0; s[var]; var++)
	{
		continue;
	}
	var -= 1;
	for (; s[var]; var--)
	{
		_putchar(s[var]);
	}
	_putchar('\n');
}
