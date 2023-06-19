#include <stdio.h>

void
print_to_98(int n)
{
	int a = 98;

	if (n < 98)
	{
		for (n = n; n < 98; a++)
			printf("%d, ", n);
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", a);
}
