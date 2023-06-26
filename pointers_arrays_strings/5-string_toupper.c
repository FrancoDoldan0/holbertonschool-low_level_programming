#include <ctype.h>
#include <string.h>
#include "main.h"

char
*string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		ptr++;
	}

	return (str);
}
