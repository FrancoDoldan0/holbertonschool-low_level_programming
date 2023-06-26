#include "main.h"

char
*_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a])
	{
		a++;
	}

	while (b < n)
	{
		dest[a] = src[b];
		a++;
		if (src[b] == '\0')
		{
			break;
		}
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
