#include <stdio.h>
#include "main.h"

/**
*_isalpha - Entry point
*@c: variable
* Return: always 0
*
*
*/

int
_isalpha(int c)
{
	if (c >= 'a' && c <= 'a')
	{
		return (1);
	}

	else if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
