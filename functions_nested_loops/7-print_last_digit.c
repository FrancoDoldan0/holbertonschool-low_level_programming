#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>

int
print_last_digit(int numero)
{
	int ultimoDigito = numero % 10;

	if (numero < 0)
	{
		ultimoDigito = ultimoDigito * -1;
	}

	_putchar (ultimoDigito + '0');
	return (ultimoDigito);

}
