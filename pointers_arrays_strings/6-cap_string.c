#include <ctype.h>

char
*cap_string(char *str)
{
	int capitalize_next = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (isspace(*ptr) || ispunct(*ptr))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			*ptr = toupper(*ptr);
			capitalize_next = 0;
		}

		ptr++;
	}

	return (str);
}
