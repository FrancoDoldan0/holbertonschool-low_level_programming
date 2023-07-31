#include "main.h"

int
get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = (n >> index) & 1;
	/*desplaza 'n' bits a la derecha*/

	if (index < 32) /*número de bit de unsigned long int*/
	{
		if (bit == 0 || bit == 1)
			return (bit);
	}
	return (-1);
}
