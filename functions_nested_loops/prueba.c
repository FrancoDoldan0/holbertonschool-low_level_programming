#include <stdio.h>

/**
*main - entry point
*
*
*Return: always 0
*
*/

int main(void)
{
	char n[] = "_putchar";
	int l = sizeof(n) - 1;
	int e;

	for (e = 0; e < l; e++)
	{
	_putchar(n[e]);
	}
	return (0);
}
