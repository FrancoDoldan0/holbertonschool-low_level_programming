#include "main.h"

int
_atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	/*Handle leading whitespace*/
	while (s[i] == ' ')
		i++;

	/*Handle sign*/
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/*Convert digits to integer*/
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
