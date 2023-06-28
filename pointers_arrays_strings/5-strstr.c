#include <stddef.h>
#include <stdio.h>
#include "main.h"

char
*_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && (*h++ == *n++))
		{
			if (!*n)
			{
				return (haystack);
			}
		}
		haystack++;
	}

	return (NULL);
}
