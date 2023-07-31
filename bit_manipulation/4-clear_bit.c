#include "main.h"

int
clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val = 1;

	if (index <	32)
	{
		val <<= index;
		(*n) = ~val & (*n);
		return (1);
	}
	return (-1);
}
