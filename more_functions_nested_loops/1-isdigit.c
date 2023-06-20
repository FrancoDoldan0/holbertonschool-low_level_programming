#include <stdio.h>
#include "main.h"

int
_isdigit(int c)
{
	int a;

	if (c >= '0' && c <= '9')

		a = 1;

	else
		a = 0;

	return (a);
}
