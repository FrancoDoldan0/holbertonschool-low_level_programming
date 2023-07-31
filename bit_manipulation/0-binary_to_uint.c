#include "main.h"
/**
 *binary_to_uint - function that converts a binary number to an unsigned int
 *@b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int
binary_to_uint(const char *b)
{
	int a = 0;
	unsigned int num = 0;

	if (!b)
	{
		return (0);
	}

	while (b[a])
	{
	if (b[a] != '0' && b[a] != '1')
		return (0);

	num = (num << 1) | (b[a] - '0');

	a++;
	}
	return (num);
}
