#include "main.h"

void
print_diagonal(int n)
{
	int linea;
	int numero;

	if (n > 0)
	{
		for (linea = 0; linea < n; linea++)
		{
			for (numero = 0; numero < linea; numero++)
			_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
	if (n <= 0)
		_putchar('\n');
}
