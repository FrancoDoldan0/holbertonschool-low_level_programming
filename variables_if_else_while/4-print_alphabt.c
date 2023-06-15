#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (if is success)
 *
 **/

int main(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
	if (e != 'q' && 'e' != e)
		{
		putchar(e);
		}
	}
	putchar('\n');
	return (0);
}
