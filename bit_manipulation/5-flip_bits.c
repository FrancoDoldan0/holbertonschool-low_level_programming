#include "main.h"

unsigned int
flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif = n ^ m;
	unsigned long int cont = 0;

	while (dif)
	{
		cont += dif & 1;
		dif >>= 1;
	}
	return (cont);
}
