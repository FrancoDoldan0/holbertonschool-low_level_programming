#include <stdio.h>

void
more_numbers(void)
{
	int n;

	for (n = 0; n <= 14; n++)
	{
		if (n > 9)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
		}
		else
			putchar(n + '0');
	}

}
