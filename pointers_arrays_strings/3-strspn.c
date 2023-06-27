#include <stdio.h>
#include "main.h"
#include <string.h>

unsigned int
_strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;

	for (i = 0; s[i] && strchr(accept, s[i]); i++)
		length++;

	return (length);
}
