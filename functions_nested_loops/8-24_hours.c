#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - print the watch of jack_bauer
 * return: Always 0
 */
void jack_bauer(void)
{
	int hs, min;

	for (hs = 0; hs < 24; hs++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hs / 10) + '0');
			_putchar((hs % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
