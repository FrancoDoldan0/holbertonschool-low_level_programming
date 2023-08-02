#include "hash_tables.h"

/**
 * hash_djb2 - algoritmo djb2 para generar valores hash
 * @str: cadena utilizada para generar el valor hash
 *
 * Return: valor hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	/* Inicializar la variable hash con una constante arbitraria (5381) */
	unsigned long int hash = 5381;

	/* Iterar a través de los caracteres de la cadena hasta el terminador nulo */
	while (*str)
	{
/* Calcular el valor hash utilizando el algoritmo djb2 */
/* Desplazar el valor hash actual 5 bits a la izquierda*/
		/*y sumar el valor hash previo */
		/* Luego, sumar el valor ASCII del caracter actual al hash */
		hash = ((hash << 5) + hash) + *str++;

		/* El valor 33 se utiliza comúnmente como multiplicador en este algoritmo */
	}

	/* Devolver el valor hash final */
	return (hash);
}
