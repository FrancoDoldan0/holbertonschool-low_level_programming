#include <stdio.h>

void
print_to_98(int n)
{
	int a = 98;

	if (n < a)
	{
		for (n = n; n < a; a++)
			printf("%d, ", n);
	}
	else
	{
		for (n = n; n > a; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", a);
}
