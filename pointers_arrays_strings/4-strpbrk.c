#include <stdio.h>
#include <string.h>
#include "main.h"

char
*_strpbrk(char *s, char *accept)
{
	for (; *s; s++)
	{
		if (strchr(accept, *s))
			return (s);
	}
	return (NULL);
}
