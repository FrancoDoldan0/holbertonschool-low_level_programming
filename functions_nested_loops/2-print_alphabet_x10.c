#include <stdio.h>
#include "main.h"

/**
* main - start
* Return: always 0
*
*
*/
void
print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
	_putchar('\n');
	}
}
