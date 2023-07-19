#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char
*create_array(unsigned int size, char c)
{
	unsigned int b;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < size; b++)
	{
		array[b] = c;
	}
	return (array);
}
