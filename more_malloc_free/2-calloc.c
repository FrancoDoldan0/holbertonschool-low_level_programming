#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void
*_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int b;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < (nmemb * size); b++)
	{
		arr[b] = 0;
	}
	return (arr);
}
