#include <stdio.h>

/**
* main - entry point
*
*
*Return: always (0)
*
*/

int main(void)
{
	char n[] = "_putchar";
	int l = sizeof(n) - 1;

	for (int e = 0; e < l; e++)
	{
	putchar(n[e]);
	putchar('\n');
	}
	return (0);
}
