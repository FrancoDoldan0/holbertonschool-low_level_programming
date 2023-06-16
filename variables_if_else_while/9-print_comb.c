#include <stdio.h>
/**
 * main - start
 * Return: always 0
 *
 *
 */

int main(void)
{
	int A;

	for (A = '0'; A <= '9'; A++)
	{
		putchar(A);

		if (A == '9')
		{
			break;
		}
	putchar(',');
	putchar(' ');

	}
	putchar('\n');
	return (0);
}
